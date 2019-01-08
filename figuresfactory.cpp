#include "figuresfactory.h"

Figures* FiguresFactory::create(enumFigures type)
{
    Figures *figures = NULL;

    switch (type) {
    case king:
        figures = new Figure_King;
        figures->set_Movement(true,1,true,1,true,1);

        break;
    case queen:
        figures = new Figure_Queen;
        figures->set_Movement(false,0,false,0,true,99);

        break;
    case crook:
        figures = new Figure_Crook;
        figures->set_Movement(true,99,true,99,false,0);

        break;
    case bishop:
        figures = new Figure_Bishop;
        figures->set_Movement(false,0,false,0,true,99);
        break;
    case knight:
        figures = new Figure_Knight;
        figures->set_Movement(true,3,true,3,false,0);

        break;
    case pawn:
        figures = new Figure_Pawn;
        figures->set_Movement(false,0,true,1,false,0);
        break;

    default:
        break;
    }
}
