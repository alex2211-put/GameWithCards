//
// Created by alik on 04.04.2020.
//

#ifndef PRIMITIV_PRIMITIV_H
#define PRIMITIV_PRIMITIV_H

#include "Vector2D.cpp"

class Primitiv  // от этого класса происходит наследование всего
{
protected:
    double red{};  // красный цвет (в OpenGL цвет меняется от 0 до 1)
    double green{};  // зелёный цвет
    double blue{};  // синий цвет
public:
    virtual void paintLines() = 0;  // рисование, не закрашивая

    virtual void paintPolygon() = 0;  // рисование с закрашиванием

    virtual void changeSize(double N) = 0;  // изменить размер в N раз (увеличить), чтобы уменьшить - дробное число

    virtual void changePositionUp(double up) = 0;  // движение вверх

    virtual void changePositionDown(double down) = 0;  // движение вниз

    virtual void changePositionLeft(double left) = 0;  // движение влево

    virtual void changePositionRight(double right) = 0;  // движение вправо

    virtual void setColor(double red, double green, double blue) = 0;  // изменить цвет
};


#endif //PRIMITIV_PRIMITIV_H
