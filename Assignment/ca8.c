#include <stdio.h>

void main(int argc, char* argv[]){
	
	char revstr[20];
	int n, i;

	for(n=0; argv[1][n]!='\0'; n++);
	
	for(i=0; i<n; i++) revstr[i]=argv[1][(n-1)-i];
	revstr[n] = '\0';

	printf("%s\n", revstr);


}
