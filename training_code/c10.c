#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
	char hero[20];
	
	strcat(hero,argv[1]);
	strcat(hero," ");
	strcat(hero,argv[2]);

	printf("The Hero is: %s\n",hero);
	
	if(strcmp(hero,"brad pitt"))
		printf("Not Anjelina Jolie\n");
	else
		printf("Anjelina Jolie\n");
}
