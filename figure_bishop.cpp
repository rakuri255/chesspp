#include "figure_bishop.h"

void Figure_Bishop::move(const int& x, const int& y)
{
  //check if movement is posible
  bool xPosibility = x <= x_steps && -x_steps <= x ? true : false;
  bool yPosibility = y <= y_steps && -y_steps <= y ? true : false;

  //xy move -> diagonal
    if(x == y && xPosibility && yPosibility)
        qDebug() << "i move " << x << "in xy direction";
    else
        qDebug() << "ilegal movement";

}
