#include <stdio.h>
#include <math.h>

float rad2deg (float deg){
  return deg * 180 / M_PI;
}

void main (){

  char planets[9][20] = { "mercury", "venus  ", "earth  ", "mars   ", "jupiter", "saturn ", "uranus ", "neptune" };
  float x[8] = { -00.157, -00.200, -00.268, -01.450, +02.871, -08.543, +19.922, +26.272 };
  float y[8] = { +00.279, -00.698, -00.979, -00.694, +04.098, -04.635, +01.988, -14.355 };

  float r[8];
  int i, a[8];

  for (i = 0; i < 8; i++)
    r[i] = sqrt (pow (x[i], 2) + pow (y[i], 2));

  for (i = 0; i < 8; i++)
    a[i] = y[i] > 0 ? round(rad2deg(acos(x[i]/r[i]))) : round (360-rad2deg(acos(x[i]/r[i])));

  printf ("| Planets\t|\t  X\t|\t  Y\t|\t  R\t|\t  A |\n");
  printf ("-----------------------------------------------------------------------------\n");

  for (i = 0; i < 8; i++)
    printf ("| %s\t|\t%5.3f\t|\t%5.3f\t|\t%5.3f\t|\t%3d |\n", planets[i], x[i], y[i],r[i], a[i]);
}
