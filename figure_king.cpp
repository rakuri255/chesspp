#include "figure_king.h"

void Figure_King::move(const int& x, const int& y)
{
  //check if movement is posible
  //x Movement
  bool xPosibility = x <= x_steps && -x_steps <= x ? true : false;
  bool yPosibility = y <= y_steps && -y_steps <= y ? true : false;

  if(xPosibility && y == 0)
    qDebug() << "i move " << x << "in x direction";
  //y Movement
  else if(x == 0 && yPosibility)
    qDebug() << "i move " << y << "in y direction";
  else if(x == y && xPosibility && yPosibility) //xy move -> diagonal
    qDebug() << "i move " << x << "in xy direction";
  else
    qDebug() << "ilegal movement";
}
