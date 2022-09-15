#include <stdio.h>

void ourstrcpy(char *x, char *y){
  while (*x++ = *y++);
}
void main(){
  char a[15] = "Cathay Pacific";
  char b[15];
  ourstrcpy(b,a);
  printf("%s\n",b);
}
