//
// Created by xaero on 15.04.2020.
//

#ifndef UNTITLED1_POINT_H
#define UNTITLED1_POINT_H

#include <GL/glut.h>

class Point {
private:
    double x; // координаты точки
    double y;
    double red; // цвета в RGB
    double green;
    double blue;
    double transparency; // прозрачность
    double size; // размер точки
public:
    Point (); // стандартный конструктор, конструктор через вектор и через координаты
    Point (Vector2D v, double red, double green, double blue, double transparency);
    Point (double x, double y, double red, double green, double blue, double transparency);
    Point (double x, double y);

    ~Point (); // деструктор, не более

    void draw_point(); // нарисовать точку

    void move_on_vector(Vector2D v); // передвинуть точку на заданный вектор

    void move_up(double up); // передвинуть точку вверх, вниз, вправо, влево
    void move_down(double down);
    void move_right(double right);
    void move_left(double left);

    void set_red(double red); // задать точке основные цвета
    void set_green(double green); // эти функции необходимы для рисования треугольника
    void set_blue(double blue); // и квадрата по точкам

    double get_red(); // получить основные цвета
    double get_green(); // это также пригодится в рисовании других фигур
    double get_blue();

    double get_x(); // получить координаты точки
    double get_y();

    void change_size(double a); // увеличить точку (a > 1) или уменьшить (а < 1)

    void change_point_color(double red, double green, double blue); // изменить цвет точки, быстро и удобно

    void set_transparency(double transparency); // изменить прозрачность

    void new_coordinates(double x, double y); // задать точке новые координаты

};


#endif //UNTITLED1_POINT_H
