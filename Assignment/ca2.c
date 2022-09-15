#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkPrime(int n);

bool checkArmstrong(int n);

bool checkPerfect(int n);	

int main(int argc, char* argv[]){

  int number = atoi(argv[1]);

  printf("Prime Number: ");
  if(checkPrime(number)) printf("Yes\n");
  else printf("No\n");

  printf("Armstrong Number: ");
  if(checkArmstrong(number)) printf("Yes\n");
  else printf("No\n");

  printf("Perfect Number: ");
  if(checkPerfect(number)) printf("Yes\n");
  else printf("No\n");
}

int checkPrime(int n){

  int i, flag;

  if(n>1){
  for(i=2; i<=(n/2); i++){
    flag = n%i;
    if (flag==0){
      return 0;
      break;
    }
  }
  return 1;
  }

  else return 0;
}

bool checkArmstrong(int n){

  int i, digit_sum=0, ref = n, digit=1;
  
  while(n/10>0){
    digit++;
    n/=10;
  }

  n=ref;

  while (n>0){
    digit_sum += pow(n%10,digit);
    n = n/10;
  }
  return (ref==digit_sum);
}

bool checkPerfect(int n){

  int factor_sum = 1, i;
  for(i=2; i<n; i++){
    if(n%i==0)
    factor_sum += i;
  }
  return n==factor_sum;
}
