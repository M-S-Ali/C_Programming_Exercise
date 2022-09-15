#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int numberName(char name[]){
  if (!strcmp("one", name)) return 1;
  else if (!strcmp("two", name)) return 2;
  else if (!strcmp("three", name)) return 3;
  else if (!strcmp("four", name)) return 4;
  else if (!strcmp("five", name)) return 5;
  else if (!strcmp("six", name)) return 6;
  else if (!strcmp("seven", name)) return 7;
  else if (!strcmp("eight", name)) return 8;
  else if (!strcmp("nine", name)) return 9;
  else if (!strcmp("zero", name)) return 0;
  else {
    printf("INUT ERROR\n");
    exit(0);
  }
}

void main(int argv, char* argc[]){
  int num=0, pwr=argv-2;
  for(int i=1; i<argv; i++){
    num += numberName(argc[i])*pow(10,pwr);
    pwr--;
  }
  printf("%d\n",num);
}
