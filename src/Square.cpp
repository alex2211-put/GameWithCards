//
// Created by alik on 28.03.2020.
//

#include "Square.h"

Square::Square()
{
    Vector2D s = Vector2D();
    this->A = s;
    this->B = Vector2D(0, 0);
    this->C = Vector2D(0, 0);
    red = 0.5;
    green = 0.8;
    blue = 0.5;
}

Square::~Square()
{
    this->A = Vector2D(0, 0);
    this->B = Vector2D(0, 0);
    this->C = Vector2D(0, 0);
    red = 0.5;
    green = 0.8;
    blue = 0.5;
}

Square::Square(Vector2D A, Vector2D B, Vector2D C, Vector2D D)
{
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    red = 0.5;
    green = 0.8;
    blue = 0.5;
}

Square::Square(Vector2D A, Vector2D B, Vector2D C, Vector2D D, double red, double green, double blue)
{
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;

    this->red = red;
    this->green = green;
    this->blue = blue;
}

Square::Square(Vector2D A, Vector2D C)
{
    this->A = A;
    this->C = C;
    Vector2D O = (C - A) / 2;
    Vector2D n = Vector2D(-(O).getY(), (O).getX());
    this->D = A + O + n;
    this->B = A + O - n;

    red = 0.5;
    green = 0.8;
    blue = 0.5;
}

Square::Square(Vector2D A, Vector2D C, double red, double green, double blue)
{
    this->A = A;
    this->C = C;
    Vector2D O = (C - A) / 2;
    Vector2D n = Vector2D((O).getY(), -(O).getX());
    this->D = O + n;
    this->B = O - n;

    this->red = red;
    this->green = green;
    this->blue = blue;
}

void Square::setColor(double red, double green, double blue)
{
    this->red = red;
    this->green = green;
    this->blue = blue;
}

void Square::changeSize(double N)
{
    A *= N;
    B *= N;
    C *= N;
    D *= N;
}

void Square::paintLines()
{
    glBegin(GL_LINES);
    glColor3f(red, green, blue);
    glVertex2f(A.getX(), A.getY());
    glColor3f(red, green, blue);
    glVertex2f(B.getX(), B.getY());
    glEnd();
    glBegin(GL_LINES);
    glColor3f(red, green, blue);
    glVertex2f(B.getX(), B.getY());
    glColor3f(red, green, blue);
    glVertex2f(C.getX(), C.getY());
    glEnd();
    glBegin(GL_LINES);
    glColor3f(red, green, blue);
    glVertex2f(C.getX(), C.getY());
    glColor3f(red, green, blue);
    glVertex2f(D.getX(), D.getY());
    glEnd();
    glBegin(GL_LINES);
    glColor3f(red, green, blue);
    glVertex2f(A.getX(), A.getY());
    glColor3f(red, green, blue);
    glVertex2f(D.getX(), D.getY());
    glEnd();
}

void Square::paintPolygon()
{
    glBegin(GL_POLYGON);
    glColor3f(red, green, blue);
    glVertex2f(A.getX(), A.getY());
    glColor3f(red, green, blue);
    glVertex2f(B.getX(), B.getY());
    glColor3f(red, green, blue);
    glVertex2f(C.getX(), C.getY());
    glColor3f(red, green, blue);
    glVertex2f(D.getX(), D.getY());
    glEnd();
}

void Square::changePositionUp(double up)
{
    A.setY(A.getY() + up);
    B.setY(B.getY() + up);
    C.setY(C.getY() + up);
    D.setY(D.getY() + up);
}

void Square::changePositionDown(double down)
{
    A.setY(A.getY() - down);
    B.setY(B.getY() - down);
    C.setY(C.getY() - down);
    D.setY(D.getY() - down);
}

void Square::changePositionLeft(double left)
{
    A.setX(A.getX() - left);
    B.setX(B.getX() - left);
    C.setX(C.getX() - left);
    D.setX(D.getX() - left);
}

void Square::changePositionRight(double right)
{
    A.setX(A.getX() + right);
    B.setX(B.getX() + right);
    C.setX(C.getX() + right);
    D.setX(D.getX() + right);
}
