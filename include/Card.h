//
// Created by alik on 18.04.2020.
//

#ifndef GAMEWITHCARDS_CARD_H
#define GAMEWITHCARDS_CARD_H

#include "Rectangle.h"
#include "Ellipse.cpp"
#include "Circle.cpp"
#include "Star.cpp"

class Card
{
private:
    double x;
    double y;

    double width;
    double length;

    int variant;
    bool isClick;
    bool isDrawing;

    double transparency;

public:
    Card();

    Card(double x, double y, double width, double length);

    void paintBackSide() const;

    [[nodiscard]] int getVariant() const;

    [[nodiscard]] bool getClick() const;

    [[nodiscard]] double getX() const;

    [[nodiscard]] double getY() const;

    void setClick(bool s);

    void setVariant(int v);

    void variant1() const;

    void variant2() const;

    void variant3() const;

    void variant4() const;

    void variant5() const;

    void setTransparency(double t);

    [[nodiscard]] bool getDrawing() const;

    void setDrawing(bool d);

    Card &operator=(const Card &c);

    bool operator!=(const Card &c) const;
};


#endif //GAMEWITHCARDS_CARD_H
