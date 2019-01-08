/*
 * Code Training
 * Chess game with cpp
 *
 */

#include "figures.h"



void Figures::set_Movement(const bool& x_Movement,const int& x_steps,const bool& y_Movement,const int& y_steps,const bool& xy_Movement,const int& xy_steps)
{
    this->x_Movement = x_Movement;
    this->x_steps = x_steps;
    this->y_Movement = y_Movement;
    this->y_steps = y_steps;
    this->xy_Movement = xy_Movement;
    this->xy_steps = xy_steps;
}

/*
Figures::Figures(enumFigures type, enumColor color, bool alive = true)
{
    this->type = type;
    this->color = color;
    this->alive = alive;
}
*/
