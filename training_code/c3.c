//passing parameter from terminal to program
//execute the code as: ./c3 hello world

#include <stdio.h>

int main(int argc, char* argv[]){
	int i;
	for (i=1; i<argc; i++){
		printf("\n %d %s",i,argv[i]);
	}
	printf("\n");
}
