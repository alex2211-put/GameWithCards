//
// Created by alik on 19.04.2020.
//

#ifndef GAMEWITHCARDS_STARS_H
#define GAMEWITHCARDS_STARS_H

#include "Clicks.h"

bool one = true;
bool big = true;
double size = 0.1;

std::vector<Star> star(100);

void onePaint()
{
    if (one)
    {
        for (auto &i :star)
        {
            time_t t;
            time(&t);
            i = Star(int(random() * t) % 37 / 10. - 1.8, int(random() * t) % 20 / 10. - 1, 0.3, 0.3, 0.5, 0.1, 1);
            i.set_width(5);
        }
        one = false;
    }
}

void displayStar()
{
    if (howManyOnTable == 0)
    {
        glClearColor(0, 1, 0, 1);
        for (auto &i : star)
            i.drow_Star();
    }
}

void changeStars()
{
    if (big)
    {
        size += 0.001;
        if (size >= 1.1)
        {
            big = false;
            for (auto &i : star)
            {
                time_t t;
                time(&t);
                i.setX(int(random() * t) % 37 / 10. - 1.8);
                i.setY(int(random() * t) % 20 / 10. - 1);
                i.change_star_color(random() / RAND_MAX, random() / RAND_MAX, random() / RAND_MAX);
            }
        }
    }

    if (howManyOnTable == 0)
    {
        if (!big)
        {
            size -= 0.002;
            if (size <= 0.91)
                big = true;
        }
        for (auto &i : star)
        {
            i.change_size(size);
        }
    }
}

#endif //GAMEWITHCARDS_STARS_H
