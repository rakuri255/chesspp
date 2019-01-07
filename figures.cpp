/*
 * Code Training
 * Chess game with cpp
 *
 */

#include "figures.h"

Figures::Figures(enumFigures type, enumColor color, bool alive = true)
{
    this->type = type;
    this->color = color;
    this->alive = alive;
}
