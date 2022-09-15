#include <stdio.h>

void main(){
   
  char str1[20], str2[20];
  int i, j;
  
  printf("Enter String 1: ");
  scanf("%s",str1);
  printf("Enter String 2: ");
  scanf("%s",str2);

  for(i=0; str1[i]!='\0'; i++); 
  
  for(j=0; str2[j]!='\0'; j++){
      str1[i]=str2[j];
      i++;
   }

   str1[i]='\0';

   printf("%s\n",str1);
}
