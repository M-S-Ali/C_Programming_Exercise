#include <stdio.h>

void main(){
  int A[2][2] = { {1, 2}, {3, 4}};
  int B[2][3] = { {5, 6, 7}, {8,9,10}};
  int C[2][3];
  int i,j,k;

  for (i = 0; i < 2; i++) for (j = 0; j < 3; j++) C[i][j] = 0;

  for (i = 0; i < 2; i++) 
    for (j = 0; j < 3; j++)  
      for (int k = 0; k < 2; k++)  
	C[i][j] += (*(*(A+i)+k))*(*(*(B+k)+j));

  for(i=0;i<2;i++){
    if(i!=0) printf("\n");	  
    for(j=0;j<3;j++){    
      printf("%d\t",C[i][j]);    
    }
  }
  printf("\n"); 
}
