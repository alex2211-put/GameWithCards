//
// Created by alik on 28.03.2020.
//

#ifndef PRIMITIV_SQUARE_H
#define PRIMITIV_SQUARE_H

#include <GL/glut.h>
#include "Primitiv.h"

class Square : private Primitiv
{
private:
    Vector2D A;  // координаты вершин кваадрата
    Vector2D B;
    Vector2D C;
    Vector2D D;

public:
    Square(Vector2D A, Vector2D B, Vector2D C,
           Vector2D D);  // конструктор по 4 вершинам (если задать их не как квадрат, то и будет "не квадрат")

    Square(Vector2D A, Vector2D B, Vector2D C, Vector2D D, double red, double green,
           double blue);  // сразу раскрашиваем

    Square(Vector2D A, Vector2D C);  // конструктор по двум противоположным вершинам

    Square(Vector2D A, Vector2D C, double red, double green, double blue);  // две вершины и цвет

    Square();  // по умолчанию все координаты (0, 0)

    ~Square();  // деструктор

    void setColor(double red, double green, double blue) override;  // задаем цвет

    void paintLines() override;  // рисуем линиями, не закрашивая

    void paintPolygon() override;  // рисуем, закрашивая

    void
    changeSize(double N) override;  // изменить размер квадрата в N раз (увеличить), чтобы уменьшить - дробное число

    void changePositionUp(double up) override;  // движение вверх

    void changePositionDown(double down) override;  // движение вниз

    void changePositionLeft(double left) override;  // движение влево

    void changePositionRight(double right) override;  // движение вправо
};


#endif //PRIMITIV_SQUARE_H
