//
// Created by alik on 18.04.2020.
//

#include "Card.h"

Card::Card()
{
    this->x = 0;
    this->y = 0;
    width = 0.5;
    isClick = false;
    length = 0.75;
    variant = 0;
    transparency = 0.5;
    isDrawing = true;
}

Card::Card(double x, double y, double width, double length)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->length = length;
    isClick = false;
    variant = 0;
    transparency = 0.5;
    isDrawing = true;
}

int Card::getVariant() const
{
    return variant;
}

void Card::setClick(bool s)
{
    isClick = s;
}

bool Card::getClick() const
{
    return isClick;
}

void Card::paintBackSide() const
{
    Rectangle a = Rectangle(Point(x + width / 2, y + length / 2, 0.5, 0.f, 0.f, transparency),
                            Point(x - width / 2, y + length / 2, 0.f, 0.5, 0.f, transparency),
                            Point(x - width / 2, y - length / 2, 0.5, 0.f, 0.f, transparency),
                            Point(x + width / 2, y - length / 2, 0.f, 0.f, 0.5, transparency));
    Rectangle sq = Rectangle(Point(x + width / 2, y, 0.5, 0.f, 0.f, transparency),
                             Point(x, y + width / 2, 0.f, 0.5, 0.f, transparency),
                             Point(x - width / 2, y, 0.5, 0.f, 0.f, transparency),
                             Point(x, y - width / 2, 0.f, 0.f, 0.5, transparency));

    Star s1 = Star(x + width * 1 / 3, y + length * 1 / 3, width / 8, 0.8, 0.8, 0.f, transparency);
    s1.set_width(2);
    s1.drow_Star();
    Star s2 = Star(x - width * 1 / 3, y + length * 1 / 3, width / 8, 0.f, 0.f, 5.f, transparency);
    s2.set_width(2);
    s2.drow_Star();
    Star s3 = Star(x + width * 1 / 3, y - length * 1 / 3, width / 8, 0.f, 5.f, 0.f, transparency);
    s3.set_width(2);
    s3.drow_Star();
    Star s4 = Star(x - width * 1 / 3, y - length * 1 / 3, width / 8, 0.8, 0.8, 0.f, transparency);
    s4.set_width(2);
    s4.drow_Star();
    sq.draw_Rectangle();
    a.draw_Rectangle();
}

void Card::variant1() const
{
    Rectangle a = Rectangle(Point(x + width / 2, y + length / 2, 1, 1, 1, 1),
                            Point(x - width / 2, y + length / 2, 1, 1, 1, 1),
                            Point(x - width / 2, y - length / 2, 1, 1, 1, 1),
                            Point(x + width / 2, y - length / 2, 1, 1, 1, 1));
    Circle c = Circle(x, y, width / 3, 0.5, 0.2, 0.3, 1);
    c.draw_circle();
    a.draw_Rectangle();
}

void Card::variant2() const
{
    Rectangle a = Rectangle(Point(x + width / 2, y + length / 2, 1, 1, 1, 1),
                            Point(x - width / 2, y + length / 2, 1, 1, 1, 1),
                            Point(x - width / 2, y - length / 2, 1, 1, 1, 1),
                            Point(x + width / 2, y - length / 2, 1, 1, 1, 1));
    Star s1 = Star(x - width / 4, y + length / 4, width / 4, 0.8, 0.3, 0.3, 1);
    Star s2 = Star(x + width / 4, y - length / 4, width / 4, 0.8, 0.3, 0.3, 1);
    s1.set_width(10);
    s2.set_width(10);
    s1.drow_Star();
    s2.drow_Star();
    a.draw_Rectangle();
}

void Card::variant3() const
{
    Rectangle a = Rectangle(Point(x + width / 2, y + length / 2, 1, 1, 1, 1),
                            Point(x - width / 2, y + length / 2, 1, 1, 1, 1),
                            Point(x - width / 2, y - length / 2, 1, 1, 1, 1),
                            Point(x + width / 2, y - length / 2, 1, 1, 1, 1));
    Rectangle r = Rectangle(Point(x + width / 2, y, 1, 0, 0, 1),
                            Point(x, y + width / 2, 0, 1, 0, 1),
                            Point(x - width / 2, y, 1, 0, 1, 1),
                            Point(x, y - width / 2, 0, 1, 1, 1));
    r.draw_Rectangle();
    a.draw_Rectangle();
}

void Card::variant4() const
{
    Rectangle a = Rectangle(Point(x + width / 2, y + length / 2, 1, 1, 1, 1),
                            Point(x - width / 2, y + length / 2, 1, 1, 1, 1),
                            Point(x - width / 2, y - length / 2, 1, 1, 1, 1),
                            Point(x + width / 2, y - length / 2, 1, 1, 1, transparency));
    Ellipse e = Ellipse(x, y + length / 4, width / 2, length / 4, 0.4, 0.1, 0.7, 1);
    Ellipse t = Ellipse(x, y - length / 4, width / 2, length / 4, 0.7, 0.1, 0.4, 1);
    t.draw_full_ellipse();
    e.draw_full_ellipse();
    a.draw_Rectangle();
}

void Card::variant5() const
{
    Rectangle a = Rectangle(Point(x + width / 2, y + length / 2, 1, 1, 1, 1),
                            Point(x - width / 2, y + length / 2, 1, 1, 1, 1),
                            Point(x - width / 2, y - length / 2, 1, 1, 1, 1),
                            Point(x + width / 2, y - length / 2, 1, 1, 1, 1));
    Star s = Star(x, y + length * 3 / 10, length / 10, 1, 0, 0, 1);
    s.set_width(5);
    s.drow_Star();
    Star s2 = Star(x, y, length / 10, 0, 1, 0, 1);
    s2.set_width(5);
    s2.drow_Star();
    Star s3 = Star(x, y - length * 3 / 10, length / 10, 0, 0, 1, 1);
    s3.set_width(5);
    s3.drow_Star();
    a.draw_Rectangle();
}

void Card::setVariant(int v)
{
    this->variant = v;
}

double Card::getX() const
{
    return x;
}

Card &Card::operator=(const Card &c)
{
    this->x = c.x;
    this->y = c.y;
    this->width = c.width;
    this->length = c.length;
    return *this;
}

double Card::getY() const
{
    return y;
}

void Card::setTransparency(double t)
{
    this->transparency = t;
}

bool Card::getDrawing() const
{
    return isDrawing;
}

void Card::setDrawing(bool d)
{
    this->isDrawing = d;
}

bool Card::operator!=(const Card &c) const
{
    return !(x == c.x && y == c.y);
}
