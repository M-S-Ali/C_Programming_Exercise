#include<stdio.h>
#include<string.h>

void main(){

   int i,j,n;
   char names[100][100],copy[100];

   printf("Enter the Number of Names: ");
   scanf("%d",&n);

   printf("Enter the Names: ");
   for(i=0;i<n;i++) scanf("%s",names[i]);
   
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(names[i],names[j])>0){
            strcpy(copy,names[i]);
            strcpy(names[i],names[j]);
            strcpy(names[j],copy);
         }
      }
   }

   printf("Sorted Names:");
   for(i=0;i<n;i++) printf(" %s",names[i]);
   printf("\n");
}
