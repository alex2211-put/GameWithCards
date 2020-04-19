//
// Created by xaero on 15.04.2020.
//

#include "Ellipse.h"

Ellipse::Ellipse() {
    xCenter = 0;
    yCenter = 0;
    big = 0.5;
    small = 0.3;
    red = 1;
    green = 1;
    blue = 0;
    transparency = 1;
}
Ellipse::Ellipse(Vector2D center, double big, double small, double red,double green,double blue,double transparency) {
    xCenter = center.getX();
    yCenter = center.getY();
    this->small = small;
    this->big = big;
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->transparency = transparency;
}
Ellipse::Ellipse(double xCenter, double yCenter, double big, double small, double red, double green,double blue, double transparency) {
    this->xCenter = xCenter;
    this->yCenter = yCenter;
    this->big = big;
    this->small = small;
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->transparency = transparency;
}

Ellipse::~Ellipse() {};

void Ellipse::draw_ellipse() {
    glBegin(GL_LINES);
    for (unsigned int i=0; i<400; i++) {
        glColor3d(red, green, blue);
        glVertex2d(xCenter + big * cos(i * 0.0157), yCenter + small * sin(i * 0.0157));
        glVertex2d(yCenter + big * cos((i + 1) * 0.0157), xCenter + small * sin((i + 1) * 0.0157));
    }
    glEnd();
};

void Ellipse::change_ellipse_color(double red, double green, double blue) {
    this->red = red;
    this->green = green;
    this->blue = blue;
};

void Ellipse::draw_full_ellipse() {
    glBegin(GL_POLYGON);
    for (unsigned int i=0; i<400; i++) {
        glColor3d(red, green, blue);
        glVertex2d(xCenter + big * cos(i * 0.0157), yCenter + small * sin(i * 0.0157));
    }
    glEnd();
};

void Ellipse::move_on_vector(Vector2D v2) {
    xCenter += v2.getX();
    yCenter += v2.getY();
};

void Ellipse::move_up(double up) {
    yCenter += up;
};

void Ellipse::move_down(double down) {
    yCenter -= down;
};

void Ellipse::move_right(double right) {
    xCenter += right;
};

void Ellipse::move_left(double left) {
    xCenter -= left;
};

void Ellipse::change_big(double a) {
    big *= a;
};

void Ellipse::change_small(double a) {
    small *= a;
};

void Ellipse::change_transparency(double transparency) {
    this->transparency = transparency;
};