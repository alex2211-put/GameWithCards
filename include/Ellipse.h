//
// Created by xaero on 15.04.2020.
//

#ifndef UNTITLED1_ELLIPSE_H
#define UNTITLED1_ELLIPSE_H

#include "Vector2D.h"
#include <GL/glut.h>

class Ellipse {
private:
    double xCenter; // координаты центра эллипса
    double yCenter;
    double big; // большая и малая полуоси
    double small;
    double red; // цвета в RGB и прозрачность
    double green;
    double blue;
    double transparency;
public:
    Ellipse(); // базовый конструктор, конструктор через вектор и через координаты
    Ellipse(Vector2D center, double big, double small, double red,double green,double blue,double transparency);
    Ellipse(double xCenter, double yCenter, double big, double small, double red, double green,double blue, double transparency);

    ~Ellipse(); // деструктор

    void draw_ellipse(); // нарисовать контур эллипса

    void draw_full_ellipse(); // нарисовать закрашенный эллипс

    void change_ellipse_color(double red, double green, double blue); // изменить цвет эллипса

    void move_on_vector(Vector2D v2); // переместить центр эллипса на заданный вектор

    void move_up(double up); // переместить эллипс вверх, вниз, вправо и влево
    void move_down(double down);
    void move_right(double right);
    void move_left(double left);

    void change_big(double a); // изменить большую и малую полуось эллипса
    void change_small(double a); // увеличить (a > 1) или уменьшить (а < 1)

    void change_transparency(double transparency); // изменить прозрачность
};



#endif //UNTITLED1_ELLIPSE_H
