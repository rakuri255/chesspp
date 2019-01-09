#include "figure_bishop.h"

void Figure_Bishop::move(const int& x, const int& y)
{
  //check if movement is posible
  bool xyPosibility = x <= xy_steps && -xy_steps <= x ? true : false;

  //xy move -> diagonal
    if(x == y && xyPosibility)
        qDebug() << "i move " << x << "in xy direction";
    else
        qDebug() << "ilegal movement";

}
