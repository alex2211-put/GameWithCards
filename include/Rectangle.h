//
// Created by xaero on 15.04.2020.
//

#ifndef UNTITLED1_RECTANGLE_H
#define UNTITLED1_RECTANGLE_H

#include "Vector2D.h"
#include "Point.h"
#include <GL/glut.h>

class Rectangle {
private:
    Point a; // в этот раз задаем примитив, через другой примитив, правда здорово?)0)
    Point b;
    Point c;
    Point d;
public:
    Rectangle (); // стандартный конструктор и конструктор через 4 точки
    Rectangle(Point a, Point b, Point c, Point d);

    ~Rectangle(); // деструктор

    void draw_Rectangle(); // нарисовать прямоугольник (вообще говоря это может и не быть прямоугольник,
                           // все зависит от координат точек, через которые он задан)
                           // цвет и прозрачность также задются через соответствующие функции для точек.

    void draw_lines_of_rectangle(); // нарисовать контур прямоугольника

    void move_up(double up); // переместить прямоугольник вверх, вниз, вправо и влево
    void move_down(double down);
    void move_left(double left);
    void move_right(double right);

    void change_Rectangle_size(double p); // изменить размер прямоугльника
                                          // по классике: увеличить - p > 1, уменьшить - р < 1

};


#endif //UNTITLED1_RECTANGLE_H
