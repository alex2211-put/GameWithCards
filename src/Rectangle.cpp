//
// Created by xaero on 15.04.2020.
//

#include "Rectangle.h"

Rectangle::Rectangle () {
    a.new_coordinates(-0.3, -0.3);
    b.new_coordinates(0.3, -0.3);
    c.new_coordinates(0.3, 0.3);
    d.new_coordinates(-0.3, 0.3);
    a.set_red(1);
    a.set_green(1);
    a.set_blue(1);
    b.set_red(0);
    b.set_green(0);
    b.set_blue(1);
    c.set_red(1);
    c.set_green(1);
    c.set_blue(1);
    d.set_red(1);
    d.set_green(0);
    d.set_blue(1);
};

Rectangle::Rectangle(Point a, Point b, Point c, Point d) {
this->a = a;
this->b = b;
this->c = c;
this->d = d;
};

Rectangle::~Rectangle() {};

void Rectangle::draw_Rectangle() {
    glBegin(GL_POLYGON);
    glColor3f( a.get_red(), a.get_green(), a.get_blue());
    glVertex2f(a.get_x(), a.get_y());
    glColor3f( b.get_red(), b.get_green(), b.get_blue());
    glVertex2f(b.get_x(), b.get_y());
    glColor3f(c.get_red(), c.get_green(), c.get_blue());
    glVertex2f(c.get_x(), c.get_y());
    glColor3f(d.get_red(), d.get_green(), d.get_blue());
    glVertex2f(d.get_x(), d.get_y());
    glEnd();
};

void Rectangle::draw_lines_of_rectangle()
{
    glBegin(GL_LINES);
    glColor3f(a.get_red(),  a.get_green(), a. get_blue());
    glVertex2f(a.get_x(), a.get_y());
    glColor3f(a.get_red(),  a.get_green(), a. get_blue());
    glVertex2f(b.get_x(), b.get_y());
    glEnd();
    glBegin(GL_LINES);
    glColor3f(b.get_red(),  b.get_green(), b. get_blue());
    glVertex2f(b.get_x(), b.get_y());
    glColor3f(b.get_red(),  b.get_green(), b. get_blue());
    glVertex2f(c.get_y(), c.get_y());
    glEnd();
    glBegin(GL_LINES);
    glColor3f(c.get_red(),  c.get_green(), c. get_blue());
    glVertex2f(c.get_x(), c.get_y());
    glColor3f(c.get_red(),  c.get_green(), c. get_blue());
    glVertex2f(d.get_x(), d.get_y());
    glEnd();
    glBegin(GL_LINES);
    glColor3f(d.get_red(),  d.get_green(), d. get_blue());
    glVertex2f(d.get_x(), d.get_y());
    glColor3f(a.get_red(),  a.get_green(), a. get_blue());
    glVertex2f(a.get_y(), a.get_y());
    glEnd();
}

void Rectangle::move_up(double up) {
    a.new_coordinates(a.get_x(), a.get_y() + up);
    b.new_coordinates(b.get_x(), b.get_y() + up);
    c.new_coordinates(c.get_x(), c.get_y() + up);
    d.new_coordinates(d.get_x(), d.get_y() + up);
};

void Rectangle::move_down(double down) {
    a.new_coordinates(a.get_x(), a.get_y() - down);
    b.new_coordinates(b.get_x(), b.get_y() - down);
    c.new_coordinates(c.get_x(), c.get_y() - down);
    d.new_coordinates(d.get_x(), d.get_y() - down);
};

void Rectangle::move_left(double left) {
    a.new_coordinates(a.get_x() - left, a.get_y());
    b.new_coordinates(b.get_x() - left, b.get_y());
    c.new_coordinates(c.get_x() - left, c.get_y());
    d.new_coordinates(d.get_x() - left, d.get_y());
};

void Rectangle::move_right(double right) {
    a.new_coordinates(a.get_x() + right, a.get_y());
    b.new_coordinates(b.get_x() + right, b.get_y());
    c.new_coordinates(c.get_x() + right, c.get_y());
    d.new_coordinates(d.get_x() + right, d.get_y());
};

void Rectangle::change_Rectangle_size(double p) {
    a.new_coordinates(a.get_x() * p, a.get_y() * p);
    b.new_coordinates(b.get_x() * p, b.get_y() * p);
    c.new_coordinates(c.get_x() * p, c.get_y() * p);
    d.new_coordinates(d.get_x() * p, d.get_y() * p);
};
