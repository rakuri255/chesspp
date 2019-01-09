/*
 * Code Training
 * Chess game with cpp
 *
 */

#ifndef FIGURES_H
#define FIGURES_H

#include "enums.h"
#include <cstddef>
#include <QDebug>
#include <QFrame>
#include <QPixmap>

/* Here are the figures defined */
/* Design Factory Strategy is used for the different figure type */

class Figures
{
public:
    virtual void move(const int&, const int&) = 0; //move to field
    void set_Movement(const bool&, const int&, const bool&, const int&, const bool&, const int&);     // can't move in X
    void set_FigurePic(const QPixmap&);
    const QPixmap get_FigurePic();
    //virtual void setY_Movement(int) = 0;     // can't move in Y

protected:
    enumFigures type;
    enumColor color;
    QFrame frame;
    QPixmap figurePic;
    bool alive;
    bool x_Movement; //can walk in x
    int x_steps;    //how many steps in x
    bool y_Movement; //can wall in y
    int y_steps;    //how many steps in y
    bool xy_Movement;    //can walk in xy
    int xy_steps;   //how many steps in xy
};

#endif // FIGURES_H
