/*
 * Code Training
 * Chess game with cpp
 *
 */

#ifndef FIGURES_H
#define FIGURES_H

#include "enums.h"

/* Here are the figures defined */
/* Design Pattern Strategy is used for the different figure type */

class Figures
{
public:
    Figures(enumFigures type, enumColor color, bool alive);
    //void setMovement(const enumFigures& type);
    //virtual bool firstMoveOther = 0;
    //virtual int x_Movement = 0;     // can't move in X
    //virtual int y_Movement = 0;     // can't move in Y
    //virtual int fightMovement = 0;  //spezific fight direction

    enumFigures type;
    enumColor color;
    bool alive;
};

class Pawn_class : public Figures
{
    Pawn_class(enumFigures type, enumColor color, bool alive = true): Figures(type, color, alive){}
private:
    //the new things
    bool firstMoveOther = true;
    int Y_Movement = 1; // can move 1 field in Y
    int fightMovement = 1; // can fight in X+1 and Y+1
};

class Knight_class : public Figures
{
public:
    Knight_class(enumFigures type, enumColor color, bool alive = true): Figures(type, color, alive){}
private:
    //the new things

};

class King_class : public Figures
{
public:
    King_class(enumFigures type, enumColor color, bool alive = true): Figures(type, color, alive){}
private:
    //the new things
};

class Queen_class : public Figures
{
public:
    Queen_class(enumFigures type, enumColor color, bool alive = true): Figures(type, color, alive){}
private:
    //the new things

};

class Crook_class : public Figures
{
public:
    Crook_class(enumFigures type, enumColor color, bool alive = true): Figures(type, color, alive){}
private:
    //the new things

};

class Bishop_class : public Figures
{
public:
    Bishop_class(enumFigures type, enumColor color, bool alive = true): Figures(type, color, alive){}
private:
    //the new things

};




#endif // FIGURES_H
