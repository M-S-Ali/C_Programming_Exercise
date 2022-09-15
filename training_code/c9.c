#include <stdio.h>

void main(){
	float mark;

	printf("Enter Your Mark out of 100: ");
	scanf("%f",&mark);

	if (0<=mark && mark<=35)
		printf("Your Grade is D\n");

	else if (35<mark && mark<=50)
                printf("Your Grade is C\n");

	else if (50<mark && mark<=80)
                printf("Your Grade is B\n");

        else if (80<mark && mark<=100)
                printf("Your Grade is A\n");

	else
            printf("Your Mark is Incorrect\n");
}
