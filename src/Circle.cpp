//
// Created by xaero on 15.04.2020.
//

#include "Circle.h"

Circle::Circle() {
    xCenter = 0;
    yCenter = 0;
    radius = 0.3;
    red = 1;
    green = 1;
    blue = 0;
    transparency = 1;
};

Circle::Circle(Vector2D center, double radius,double red,double green,double blue,double transparency) {
    xCenter = center.getX();
    yCenter = center.getY();
    this->radius = radius;
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->transparency = transparency;
}

Circle::Circle(double xCenter, double yCenter, double radius,double red,double green,double blue,double transparency) {
    this->xCenter = xCenter;
    this->yCenter = yCenter;
    this->radius = radius;
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->transparency = transparency;
}

Circle::~Circle() {};

void Circle::move_on_vector(Vector2D v2) {
    xCenter += v2.getX();
    yCenter += v2.getY();
};

void Circle::move_up(double up) {
    yCenter += up;
};

void Circle::move_down(double down) {
    yCenter -= down;
};

void Circle::move_right(double right) {
    xCenter += right;
};

void Circle::move_left(double left) {
    xCenter -= left;
};

void Circle::change_size(double a) {
    radius *= a;
};

void Circle::change_circle_color(double red, double green, double blue) {
    this->red = red;
    this->green = green;
    this->blue = blue;
};

void Circle::set_transparency(double transparency) {
    this->transparency = transparency;
};

void Circle::draw_the_Ring() {
    glBegin(GL_LINES);
    for (unsigned int i=0; i<400; i++) {
        glColor3d(red, green, blue);
        glVertex2d(xCenter + radius * cos(i * 0.0157), yCenter + radius * sin(i * 0.0157));
        glVertex2d(yCenter + radius * cos((i + 1) * 0.0157), xCenter + radius * sin((i + 1) * 0.0157));
    }
    glEnd();
};

void Circle::draw_circle() {
    glBegin(GL_POLYGON);
    for (unsigned int i=0; i<400; i++) {
        glColor3d(red, green, blue);
        glVertex2d(xCenter + radius * cos(i * 0.0157), yCenter + radius * sin(i * 0.0157));
    }
    glEnd();
}
