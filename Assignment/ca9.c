#include <stdio.h>

void printArray(char ary[], int n){
  int i;
  printf("Given Array: {");
  for(i=0; i<n; i++){
    if(i!=(n-1))printf(" %c,", ary[i]);
    else printf(" %c", ary[i]);
  }
  printf("}\n");
}

void main(){
  int i, n, j=0;
  char mode, elmnt;

  char array[5] = {'a', 'b', 'c', 'd', 'e'};
  char temp[6];

  printArray(array, 5);

  printf("Delete or Insert (d/i): ");
  scanf("%c",&mode);

  if(mode == 'd'){
    printf("Enter element to delete: ");
    scanf("%d",&n);
    n--;

    for (i=0; i<5; i++){
       if(i!=n){
         temp[j] = array[i];
         j++;
       }
    } 
    printArray(temp,4);
  }

  else if(mode == 'i'){
    printf("Enter the position of element: ");
    scanf("%d",&n);
    printf("Enter the Element: ");
    scanf(" %c",&elmnt);
    n--;

    for (i=0; i<6; i++){
      if(i<n) temp[i] = array[i];
      else if (i==n) temp[i] = elmnt;
      else temp[i] = array[i-1];
    }
    printArray(temp,6);
  }
  else printf("INPUT ERROR\n");  
}
