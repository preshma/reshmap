#include <stdio.h>
int main(int argc, char *argv[])
{
  screen(320, 240, 0, "Recursion Tree");
  cls(RGB_White);
recursion(w / 2, h - 1, 0, -1, h / 2.3, 0);

  redraw();
  sleep();
  return 0;
}void recursion(double posX, double posY, double dirX, double dirY, double size, int n)
{
  int x1, x2, y1, y2;
  int x3, x4, y3, y4;
  x1 = int(posX);
  y1 = int(posY);
  x2 = int(posX + size * dirX);
  y2 = int(posY + size * dirY);
  if(clipLine(x1, y1, x2, y2, x3, y3, x4, y4))
  drawLine(x3, y3, x4, y4, ColorRGB(128, 96, 64));

  if(n >= maxRecursions) return;
  double posX2, posY2, dirX2, dirY2, size2;
  int n2;
  posX2 = posX + size * dirX;
  posY2 = posY + size * dirY;
  size2 = size / shrink;
  n2 = n + 1;
  dirX2 = cos(angle) * dirX + sin(angle) * dirY;
  dirY2 = -sin(angle) * dirX + cos(angle) * dirY;
  recursion(posX2, posY2, dirX2, dirY2, size2, n2);
  dirX2 = cos(-angle) * dirX + sin(-angle) * dirY;
  dirY2 = -sin(-angle) * dirX + cos(-angle) * dirY;
  recursion(posX2, posY2, dirX2, dirY2, size2, n2);
}
