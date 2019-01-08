#ifndef FIGURESFACTORY_H
#define FIGURESFACTORY_H

#include "figures.h"
//figure includings
#include "figure_king.h"
#include "figure_queen.h"
#include "figure_bishop.h"
#include "figure_crook.h"
#include "figure_knight.h"
#include "figure_pawn.h"

class FiguresFactory
{

public:
    //Factory Method
    static Figures* create(enumFigures);
};

#endif // FIGURESFACTORY_H
