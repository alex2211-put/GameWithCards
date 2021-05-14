//
// Created by xaero on 15.04.2020.
//

#ifndef UNTITLED1_STAR_H
#define UNTITLED1_STAR_H

#include "Vector2D.cpp"
#include <GL/glut.h>

class Star {
private:
    double xCenter; // координаты центра окружности, описанной вокруг звезды
    double yCenter;
    double radius; // радиус этой окружности
    double width; // толщина линий
    double red; // цвета в RGB
    double green;
    double blue;
    double transparency; // прозрачность
    bool Icon_of_sin; // false - звезда, true - пентаграмма
public:
    Star (); // дефолтный конструктор, а также конструктор с центром указанным по вектору и заданным через координаты
    Star(Vector2D center,double radius,double red,double green,double blue,double transparency);
    Star(double xCenter, double yCenter, double radius,double red,double green,double blue,double transparency);

    ~Star(); // типикал деструктор

    void drow_Star(); // нарисовать

    void move_on_vector(Vector2D v2); //переместить на заданный вектор

    void move_up(double up); // переместить вверх, вниз, вправо и влево соответственно
    void move_down(double down);
    void move_right(double right);
    void move_left(double left);

    void change_size(double a); // изменить размеры (а>1 - увеличение, a<1 - уменьшение)

    void change_star_color(double red, double green, double blue); // изменить цвет

    void set_transparency(double transparency); // изменить прозрачность

    void set_width(double width); // изменить толщину линий

    void Icon_of_Sin (bool a); // превратить в икону греха и обратно

    Star& operator = (const Star& s);

    void setX(double  x);

    void setY(double  y);

    void setRadius(double  r);
};


#endif //UNTITLED1_STAR_H
