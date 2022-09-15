//compile code with: gcc c6.c -o c6 -lm
//this is to link math library's pow function

#include <stdio.h>
#include <math.h>

void main(){
	int radius;
	float area;

	printf("Enter Radius: ");
	scanf("%d",&radius);
	
	area = M_PI * pow(radius,2);

	printf("The area is %f\n",area);
}
