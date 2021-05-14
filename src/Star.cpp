//
// Created by xaero on 15.04.2020.
//

#include "Star.h"

Star::Star() {
    xCenter = 0;
    yCenter = 0;
    radius = 0.3;
    width = 1;
    red = 1;
    green = 0;
    blue = 0;
    transparency = 1;
    Icon_of_sin = false;
};

Star::Star(Vector2D center,double radius,double red,double green,double blue,double transparency) {
xCenter = center.getX();
yCenter = center.getY();
this->radius = radius;
this->red = red;
this->green = green;
this->blue = blue;
this->transparency = transparency;
Icon_of_sin = false;
};

Star::Star(double xCenter, double yCenter, double radius,double red,double green,double blue,double transparency) {
    this->xCenter = xCenter;
    this->yCenter = yCenter;
    this->radius = radius;
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->transparency = transparency;
    Icon_of_sin = false;
};

Star::~Star() {
    radius = 0;
};

void Star::drow_Star()
{
    const double STEP =double(M_PI * 4 / 5);
    double angle;
    // Начинаем новую группу примитивов (замкнутая ломаная линия)
    glLineWidth(width);
    glColor4f(red, green, blue, transparency);
    glBegin(GL_LINE_LOOP);
    if (Icon_of_sin == true) {
        angle = double(-M_PI_2);
    }
    else
        angle = double(M_PI_2);
    // Соединяем отрезками прямой линии точки, расположенные на окружности
    // в точках, с углами: -90, 54, 198, 342, 486 (126) градусов
    for (int i = 0; i < 5; ++i, angle += STEP)
    {
        double x = xCenter + radius * cosf(angle);
        double y = yCenter + radius * sinf(angle);
        // функция glVertex2f добавляет в текущую группу примитивов
        // точку, лежащую на плоскости z = 0
        // суффикс 2f в названии функции обозначает, что задаются 2 координаты
        glVertex2f(x, y);
    }
    glEnd();
};

void Star::move_on_vector(Vector2D v2) {
    xCenter += v2.getX();
    yCenter += v2.getY();
};

void Star::move_up(double up) {
    yCenter += up;
};

void Star::move_down(double down) {
    yCenter -= down;
};

void Star::move_right(double right) {
    xCenter += right;
};

void Star::move_left(double left) {
    xCenter -= left;
};

void Star::change_size(double a) {
    radius *= a;
};

void Star::change_star_color(double red, double green, double blue) {
    this->red = red;
    this->green = green;
    this->blue = blue;
};

void Star::set_transparency(double transparency) {
    this->transparency = transparency;
};

void Star::set_width(double width) {
    this->width = width;
};

void Star::Icon_of_Sin (bool a) { //превращает звезду в пентаграмму
    this->Icon_of_sin = a;
}

Star& Star::operator=(const Star &s)
{
    this->xCenter = s.xCenter;
    this->yCenter = s.yCenter;
    this->red = s.red;
    this->green = s.green;
    this->blue = s.blue;
    this->radius = s.radius;
    this->width = s.width;
    return *this;
}

void Star::setX(double x)
{
this->xCenter = x;
}

void Star::setY(double y)
{
this->yCenter = y;
}

void Star::setRadius(double r)
{
this->radius = r;
};

