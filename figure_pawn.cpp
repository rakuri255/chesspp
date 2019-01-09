#include "figure_pawn.h"

void Figure_Pawn::move(const int& x, const int& y)
{
    //first move can go +1 on y direction
    static bool firstMove = true;

    //check if movement is posible
    if(firstMove && x == 0 && y <= y_steps+1) //y Movement
    {
        firstMove = false;
        qDebug() << "i move " << y << "in y direction";
    }

    else if(x == 0 && y <= y_steps) //y Movement
    {
        firstMove = false;
        qDebug() << "i move " << y << "in y direction";
    }
    /*! Fighting
    else if(x == y && x <= x_Movement && y <= y_Movement) //xy move -> diagonal
        qDebug() << "i move " << x << "in xy direction";
        */
    else
        qDebug() << "ilegal movement";

}
