//
// Created by alik on 19.04.2020.
//

#ifndef GAMEWITHCARDS_PAINTCARDS_H
#define GAMEWITHCARDS_PAINTCARDS_H

int first = 0;

void paintCards()
{
    for (const auto &i : bankBack)
    {
        if (i.getDrawing())
        {
            if (!i.getClick())
                i.paintBackSide();
            else
            {
                switch (i.getVariant())
                {
                    case 1:
                        i.variant1();
                        break;
                    case 2:
                        i.variant2();
                        break;
                    case 3:
                        i.variant3();
                        break;
                    case 4:
                        i.variant4();
                        break;
                    case 5:
                        i.variant5();
                        break;

                }
            }
        }
    }
}

void firstPaint()
{
    int sum = 0;
    if (first == 0)
    {
        std::map<int, int> values;
        for (int i = 0; i < howManyRight; ++i)
        {
            for (int j = 0; j < howManyUp; ++j)
            {
                bankBack[sum] = Card(
                        -(1.8 - (3.6 - width * (howManyRight * 1.5 - 0.5)) / 2) + width / 2 + i * width * 1.5,
                        -(1 - (2 - length * (howManyUp * 1.5 - 0.5)) / 2) + length / 2 + j * length * 1.5, width,
                        length);
                bankBack[sum].paintBackSide();
                bankBack[sum].setClick(false);
                while (!bankBack[sum].getVariant())
                {
                    time_t t;
                    time(&t);
                    int rand = int(random() * t) % (qualityPlayer + 1);
                    if (rand < 0)
                        rand *= -1;
                    values[rand]++;
                    if (values[rand] < 3)
                        bankBack[sum].setVariant(rand);
                }
                first = 1;
                sum++;
            }
        }
    }
}

#endif //GAMEWITHCARDS_PAINTCARDS_H
