#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(int argc, char* argv[]){
	
	int h = atoi(argv[1]);
	int m = atoi(argv[2]);
	int deg;

	if(h==12) h = 0;
	
	deg = abs((h*30) + (m*0.5) - (m*6));
	
	if(deg>180) deg = 360-deg;

	printf("Hr = %d, Mn = %d, Deg = %d\n", h, m, deg);
}
