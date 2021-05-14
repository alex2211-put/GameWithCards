//
// Created by xaero on 15.04.2020.
//

#include "Point.h"

Point::Point () {
    x = 0;
    y = 0;
    red = 0;
    green = 1;
    blue = 0;
    transparency = 1;
    size = 1;
};

Point::Point (Vector2D v, double red, double green, double blue, double transparency) {
    x = v.getX();
    y = v.getY();
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->transparency = transparency;
    size = 1;
};

Point::Point (double x, double y, double red, double green, double blue, double transparency) {
    this->x = x;
    this->y = y;
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->transparency = transparency;
    size = 2;
};

Point::Point (double x, double y){
    this->x = x;
    this->y = y;
    this->red = 0.5;
    this->green = 0.5;
    this->blue = 0.5;
    this->transparency = 1;
    size = 2;
}

Point::~Point () {};

void Point::draw_point() {
    glPointSize(size);
    glBegin(GL_POINTS);
    glColor3f(red, green, blue);
    glVertex2f(x, y);
    glEnd();
};

void Point::set_red(double red) {
    this->red = red;
};

void Point::set_green(double green) {
    this->green = green;
};
void Point::set_blue(double blue) {
    this->blue = blue;
};

double Point::get_red() {
    return red;
};

double Point::get_green() {
    return green;
};

double Point::get_blue() {
    return blue;
};

double Point::get_x() {
    return x;
};

double Point::get_y() {
    return y;
};

void Point::move_on_vector(Vector2D v) {
    x += v.getX();
    y += v.getY();
}

void Point::move_up(double up) {
    y += up;
};

void Point::move_down(double down) {
    y -= down;
};

void Point::move_right(double right) {
    x += right;
};

void Point::move_left(double left) {
    x -= left;
};

void Point::change_size(double a) {
    if (a == 0) {
        size = 1;
    }
    else
        size *= a;
};

void Point::change_point_color(double red, double green, double blue) {
    this->red = red;
    this->green = green;
    this->blue = blue;
};

void Point::set_transparency(double transparency) {
    this->transparency = transparency;
};

void Point::new_coordinates(double x, double y) {
    this->x = x;
    this->y = y;
};
