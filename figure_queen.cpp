#include "figure_queen.h"

void Figure_Queen::move(const int& x, const int& y)
{
  //check if movement is posible
  bool xPosibility = x <= x_steps && -x_steps <= x ? true : false;
  bool yPosibility = y <= y_steps && -y_steps <= y ? true : false;

  if(x == y && xPosibility && yPosibility) //xy move -> diagonal
    qDebug() << "i move " << x << "in xy direction";
  else
    qDebug() << "ilegal movement";

}
