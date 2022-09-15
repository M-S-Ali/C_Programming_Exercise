#include <stdio.h>

void main (){
  int i, big = 0, small = 0;
  char planet[9][20] = { "mercury", "venus", "earth", "mars", "jupiter", "saturn", "uranus", "neptune", "pluto" };
  long diameter[] = { 4879, 12104, 12756, 6792, 142984, 120536, 51118, 49528, 2376 };

  for (i = 1; i < 9; i++){
    if (diameter[big] < diameter[i])
	big = i;
    if (diameter[small] > diameter[i])
	small = i;
  }
  printf ("big planet is: %ld %s\n", diameter[big], planet[big]);
  printf ("small planet is: %ld %s\n", diameter[small], planet[small]);
}
