#include <stdio.h>
#include <string.h>

void main(int argc, char* argv[]){
  char c = argv[2][0];
  int ascii = c;
  if (!strcmp(argv[1],"upper") && (ascii>96)) ascii-=32;
  if (!strcmp(argv[1],"lower") && (ascii<91)) ascii+=32;
  c = ascii;
  printf("%c\n",c);
}

