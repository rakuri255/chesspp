#include "figure_queen.h"

void Figure_Queen::move(const int& x, const int& y)
{
  //check if movement is posible
  bool xPosibility = x <= x_steps && -x_steps <= x ? true : false;
  bool yPosibility = y <= y_steps && -y_steps <= y ? true : false;
  bool xyPosibility = x <= xy_steps && -xy_steps <= x ? true : false;

  if(xPosibility && y == 0) //x Movement
    qDebug() << "i move " << x << "in x direction";
  else if(x == 0 && yPosibility) //y Movement
    qDebug() << "i move " << y << "in y direction";
  //xy move -> diagonal
  else if(x == y && xyPosibility)
    qDebug() << "i move " << x << "in xy direction";
  else
    qDebug() << "ilegal movement";
}
