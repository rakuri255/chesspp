#include "figure_crook.h"

void Figure_Crook::move(const int& x, const int& y)
{
  //check if movement is posible
  bool xPosibility = x <= x_steps && -x_steps <= x ? true : false;
  bool yPosibility = y <= y_steps && -y_steps <= y ? true : false;

  if(xPosibility && y == 0) //x Movement
    qDebug() << "i move " << x << "in x direction";
  else if(x == 0 && yPosibility) //y Movement
    qDebug() << "i move " << y << "in y direction";
  else
    qDebug() << "ilegal movement";

}
