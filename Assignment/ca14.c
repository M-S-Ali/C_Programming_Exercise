#include <stdio.h>

void reverse(char *str){
  if (*str) {
    reverse(str+1);
    printf("%c", *str);
  }
}

void main(int argc, char *argv[]){
  reverse(argv[1]);
  printf("\n");
}
