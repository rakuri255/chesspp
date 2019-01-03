#ifndef FIGURES_H
#define FIGURES_H


class figures
{
public:
    figures();
    virtual bool firstMoveOther;
    virtual int x_Movement; // can't move in X
    virtual int y_Movement; // can't move in Y
    virtual int fightMovement; //spezific fight direction
};

class solider : figures
{
public:
    bool firstMoveOther = true;
    int Y_Movement = 1; // can move 1 field in Y
    int fightMovement = 1; // can fight in X+1 and Y+1
};

class horse : figures
{

};







#endif // FIGURES_H
