//
// Created by alik on 18.04.2020.
//

#ifndef GAMEWITHCARDS_DISPLAY_H
#define GAMEWITHCARDS_DISPLAY_H

#include "Card.cpp"
#include "Point.cpp"
#include "Rectangle.cpp"
#include <map>
#include <vector>
#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include "Mouse.h"
#include "Stars.h"
#include "paintCards.h"

void Rotate(int value)
{
    onePaint();
    clickFunction();
    changeStars();
    glutPostRedisplay();
    glutTimerFunc(2, Rotate, 1);
}

void displayCell()
{
    glClear(GL_COLOR_BUFFER_BIT
            | GL_DEPTH_BUFFER_BIT); //очищаем экран, чтобы картинки "не размножались"
    displayStar();
    glLoadIdentity();
    firstPaint();
    paintCards();

    glEnable(GL_ALPHA_TEST); //включаем прозрачность
    glEnable(GL_BLEND);  //разрешаем мешать цвета
    glBlendFunc(GL_SRC_ALPHA,
                GL_ONE_MINUS_SRC_ALPHA
    );  //устанавливаем уровень прозрачности - пока до конца не разобрался

    glFlush();

    glutSwapBuffers();

}

void changeSize(int w, int h)
{
    if (h == 0)
        h = 1;
    wWindow = w;
    hWindow = h;
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    float ratio = (float) w / (float) h;
    if (w <= h)
        glOrtho(-1, 1, -1 / ratio, 1 / ratio, 1, -1);
    else
        glOrtho(-1 * ratio, 1 * ratio, -1, 1, 1, -1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

#endif //GAMEWITHCARDS_DISPLAY_H
