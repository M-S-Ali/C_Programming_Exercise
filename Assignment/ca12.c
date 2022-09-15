#include <stdio.h>

int getMin(int arry[], int n);
int getMax(int arry[], int n);

void main(){
  int n, i;

  printf("Enter the no: Elements: ");
  scanf(" %d",&n);

  int array[n];

  printf("Enter the elements: ");
  for(i=0; i<n; i++) scanf(" %d",&array[i]);

  printf("Max: %d\nMin: %d\n", getMax(array, n), getMin(array,n));
}

int getMin(int arry[], int n){
  n--;
  if(n==0) return arry[n];   
  else return arry[n]<getMin(arry, n-1) ? arry[n] : getMin(arry, n-1);
}

int getMax(int arry[], int n){
  n--;
  if(n==0) return arry[n];
  else return arry[n]>getMax(arry, n-1) ? arry[n] : getMax(arry, n-1);
}
