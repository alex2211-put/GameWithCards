//
// Created by alik on 18.04.2020.
//

#ifndef GAMEWITHCARDS_MOUSE_H
#define GAMEWITHCARDS_MOUSE_H

int MouseX = 0;
int MouseY = 0;
int moveMouseX = 0;
int moveMouseY = 0;

void mouseButton(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)
    {
        if (state != GLUT_UP)
        {
            MouseX = x;
            MouseY = y;
        }
    }
}

void mouseMove(int x, int y)
{
    moveMouseX = x;
    moveMouseY = y;
}

#endif //GAMEWITHCARDS_MOUSE_H
