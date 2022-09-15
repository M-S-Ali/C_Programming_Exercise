#include <stdio.h>

void main (){
  int i, big = 0, small = 0, big2 = 0, small2 = 0;
  long numbers[] = { 4879, 12104, 12756, 6792, 142984, 120536, 51118, 49528, 2376 };

  printf("Given Numbers are:");
  for(i=0; i<9; i++) printf(" %ld", numbers[i]);
  printf("\n");

  for (i = 1; i < 9; i++){
    if (numbers[big] < numbers[i])
	big = i;
    if (numbers[small] > numbers[i])
	small = i;
  }

  if(big==0) big2 = 1;
  if(small==0) small2 = 1;

  for (i = 1; i < 9; i++){
    if (numbers[big2] < numbers[i] && i!=big)
        big2 = i;
    if (numbers[small2] > numbers[i] && i!=small)
        small2 = i;
  }

  printf ("Second big number is: %ld\n", numbers[big2]);
  printf ("Second small number is: %ld\n", numbers[small2]);
}
