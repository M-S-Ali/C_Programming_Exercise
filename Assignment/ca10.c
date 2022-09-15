#include<stdio.h>
#include<stdlib.h>

int getHCF(int, int);
int getLCM(int, int);

void main(int argv, char* argc[]){
  int a = atoi(argc[1]), b = atoi(argc[2]);
  printf("GCD: %d\nLCM: %d\n",getHCF(a,b), getLCM(a,b));
}

int getHCF(int x, int y){
  int i, hcf=1;
  for(i=1; i<=x; i++) if(x%i==0 && y%i==0) hcf=i;
  return hcf;
}

int getLCM(int x, int y){
  return (x*y)/getHCF(x,y);
}
