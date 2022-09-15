#include <stdio.h>
#include <math.h>

void main(){
	char mode;
	int radius;
	int height;
	float volume;

	printf("Volume Finding Program\n");
	printf("**********************\n");

	printf("Enter Sphere or Cylinder: ");
	scanf("%c",&mode);

	if (mode=='s' || mode =='S'){
		printf("Enter Radius: ");
		scanf("%d",&radius);
		volume = ((4.00/3.00) * M_PI * pow(radius,3));
		printf("The Volume is: %f\n",volume);
	}

	else if (mode=='c' || mode =='S'){
	        printf("Enter Radius: ");
                scanf("%d",&radius);
                printf("Enter Height: ");
                scanf("%d",&height);
                volume = (M_PI * pow(radius,2) * height);
                printf("The Volume is: %f\n",volume);
        }

	else
		printf("Input Error\n");

}
