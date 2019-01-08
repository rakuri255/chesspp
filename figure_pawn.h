#ifndef FIGURE_PAWN_H
#define FIGURE_PAWN_H

#include "figures.h"

class Figure_Pawn : public Figures
{
public:
    void move(const int&, const int&); //move to field

private:
    //the new things
    bool firstMoveOther = true;
    int Y_Movement = 1; // can move 1 field in Y
    int fightMovement = 1; // can fight in X+1 and Y+1
};

#endif // FIGURE_PAWN_H
