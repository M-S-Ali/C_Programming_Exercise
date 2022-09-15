#include <stdio.h>

void main(){
  char string[] = "123456789";
  char* p = &string[0];
  int i;
  for(i=0; *p!='\0'; i++,p++);

  printf("Number of element: %d\n",i); 
}
