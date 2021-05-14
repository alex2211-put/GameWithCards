//
// Created by xaero on 15.04.2020.
//

#ifndef UNTITLED1_CIRCLE_H
#define UNTITLED1_CIRCLE_H

#include "Vector2D.h"
#include <GL/glut.h>

class Circle {
private:
    double xCenter; // координаты центра
    double yCenter;
    double radius; // радиус
    double red; // цвета в RGB и прозрачность
    double green;
    double blue;
    double transparency;
public:
    Circle(); // конструктор по дефолту а также конструкторы через вектор и координаты
    Circle(Vector2D center, double radius, double red, double green,double blue, double transparency);
    Circle(double xCenter, double yCenter, double radius, double red, double green,double blue, double transparency);

    ~Circle(); // деструктор, пустой, правда

    void move_on_vector(Vector2D v2); // переместить центр круга на заданный вектор

    void move_up(double up); // переместить центр круга вверх, вниз, вправо и влево
    void move_down(double down);
    void move_right(double right);
    void move_left(double left);

    void change_size(double a); // изменить радиус круга (a > 1 - увеличение, a < 1 - уменьшение

    void change_circle_color(double red, double green, double blue); // изменить цвет круга

    void set_transparency(double transparency); // изменить прозрачность

    void draw_the_Ring(); // нарисовать кольцо

    void draw_circle(); // нарисовать кружок

};


#endif //UNTITLED1_CIRCLE_H
