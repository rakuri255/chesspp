
#include "figure_knight.h"

void Figure_Knight::move(const int& x, const int& y)
{
  bool farRight = x == x_steps ? true : false;
  bool farLeft = x == -x_steps ? true : false;
  bool farUpper = y == y_steps ? true : false;
  bool farDowner = y == -y_steps ? true : false;

  if(farRight)
    {
      if(y == 1) //far right upper
        qDebug() << "i move " << "far right upper";
      else if(y == -1) //far right under
        qDebug() << "i move " << "far right under";
    }
  else if(farLeft)
    {
      if(y == 1) //far left upper
        qDebug() << "i move " << "far left upper";
      else if(y == -1) //far left under
        qDebug() << "i move " << "far left under";
    }
  else if(farUpper)
    {
      if(x == 1) //far upper right
        qDebug() << "i move " << "far upper right";
      else if(x == -1) //far upper left
        qDebug() << "i move " << "far upper left";
    }
  else if(farDowner)
    {
      if(x == 1) //far under right
        qDebug() << "i move " << "far under right";
      else if(x == -1) //far under left
        qDebug() << "i move " << "far under left";
    }
  else
    qDebug() << "ilegal movement";
}
