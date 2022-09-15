#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void main(int argc, char* argv[]){
  FILE* ptr;
  char str[50];
  ptr = fopen(argv[1], "a+");
 
  if (ptr == NULL) {
      printf("Invalid Operation\n");
  }

  while (fgets(str, 50, ptr) != NULL) {
      printf("%s", str);
  }

  fclose(ptr);
}
