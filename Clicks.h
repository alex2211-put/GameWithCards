//
// Created by alik on 19.04.2020.
//

#ifndef GAMEWITHCARDS_CLICKS_H
#define GAMEWITHCARDS_CLICKS_H

std::map<const int, const int> mapa{{2,  2},
                                    {4,  4},
                                    {6,  3},
                                    {8,  4},
                                    {10, 5},
                                    {12, 4},
                                    {14, 7},
                                    {16, 4},
                                    {18, 6}};

const int qualityPlayer = 5;
const int quality = qualityPlayer * 2;
const int howManyRight = mapa[quality];
const int howManyUp = quality / howManyRight;
const double width = qualityPlayer == 3 ? 0.5 : 3.6 / (howManyRight * 1.5 + 0.5);
const double length = width * 1.35;

int wWindow;
int hWindow;
int howManyOnTable = quality;


std::vector<Card *> Clicers;
std::vector<Card *> newCard;
std::vector<Card> bankBack(quality);

void clickFunction()
{
    int sum = 0;
    for (int i = 0; i < howManyRight; ++i)
    {
        for (int j = 0; j < howManyUp; ++j)
        {
            bankBack[sum].setClick((
                                           -(1.8 - MouseX * 1.8 / (wWindow / 2.)) >= bankBack[sum].getX() - width / 2 &&
                                           -(1.8 - MouseX * 1.8 / (wWindow / 2.)) <= bankBack[sum].getX() + width / 2
                                           && 1 - MouseY / (hWindow / 2.) <= bankBack[sum].getY() + length / 2 &&
                                           1 - MouseY / (hWindow / 2.) >= bankBack[sum].getY() - length / 2));

            if (!Clicers.empty())
            {
                Clicers[0]->setClick(true);
            }
            if (bankBack[sum].getClick())
            {
                if (Clicers.empty())
                {
                    Clicers.push_back(&bankBack[sum]);
                    newCard.clear();
                    newCard.push_back(&bankBack[sum]);
                } else
                {
                    if (Clicers[0] != &bankBack[sum])
                    {
                        if (newCard.size() < 3)
                            newCard.push_back(&bankBack[sum]);
                        else newCard.clear();
                        if (newCard.size() == 2)
                        {
                            newCard[0]->setClick(true);
                            newCard[1]->setClick(true);
                        }
                        if (Clicers[0]->getVariant() == bankBack[sum].getVariant())
                        {
                            Clicers[0]->setDrawing(false);
                            bankBack[sum].setDrawing(false);
                            howManyOnTable -= 2;
                            Clicers.clear();
                            MouseY = 0;
                            MouseX = 0;
                        } else
                        {
                            bankBack[sum].setClick(true);
                            Clicers[0]->setClick(true);
                            MouseX = 0;
                            MouseY = 0;
                            Clicers.clear();
                        }
                    }
                }
            }
            if (newCard.size() == 2)
            {
                newCard[0]->setClick(true);
                newCard[1]->setClick(true);
            }
            if (-(1.8 - moveMouseX * 1.8 / (wWindow / 2.)) >= bankBack[sum].getX() - width / 2 &&
                -(1.8 - moveMouseX * 1.8 / (wWindow / 2.)) <= bankBack[sum].getX() + width / 2
                && 1 - moveMouseY / (hWindow / 2.) <= bankBack[sum].getY() + length / 2 &&
                1 - moveMouseY / (hWindow / 2.) >= bankBack[sum].getY() - length / 2)
            {
                bankBack[sum].setTransparency(1);

            } else bankBack[sum].setTransparency(0.5);
            sum++;
        }
    }
}

#endif //GAMEWITHCARDS_CLICKS_H
