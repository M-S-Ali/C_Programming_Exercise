#include <stdio.h>

int getSum(int arry[], int n);

void main(){
  int n, i;

  printf("Enter the no: Elements: ");
  scanf(" %d",&n);

  int array[n];

  printf("Enter the elements: ");
  for(i=0; i<n; i++) scanf(" %d",&array[i]);

  printf("Sum: %d\n", getSum(array, n));
}

int getSum(int arry[], int n){
  n--;
  if(n==0) return arry[n];   
  else return arry[n] + getSum(arry, n);
}

