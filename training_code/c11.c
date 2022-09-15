#include <stdio.h>

void main(){
	int day;

	printf("Enter the day no:of the week: ");
	scanf("%d",&day);

	switch(day){
		case 1:
			printf("Violet\n");
			break;
                case 2:
                        printf("Indigo\n");
                        break;
                case 3:
                        printf("Blue\n");
                        break;
                case 4:
                        printf("Green\n");
                        break;
                case 5:
                        printf("Yellow\n");
                        break;
                case 6:
                        printf("Orange\n");
                        break;
                case 7:
                        printf("Red\n");
                        break;
		default:
			printf("INPUT ERROR\n");
	}
}
