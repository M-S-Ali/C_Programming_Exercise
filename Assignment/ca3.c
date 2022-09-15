#include <stdio.h>

int calcDaysIn(int dt[3]){
	
	int noDaysInMnth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i, days;

	days = dt[2]*365 + dt[0];

	for(i=0; i<(dt[1]-1); i++) days += noDaysInMnth[i];

	if(dt[1]<3) dt[2]--;
	days += (dt[2]/4) - (dt[2]/100) + (dt[2]/400);

	return days;

}

int main(){

	int dt1[3], dt2[3];

	int i, daysIn1, daysIn2, days;

	printf("Enter Date 1(dd mm yyyy): ");
	for(i=0; i<=2; i++) scanf("%d",&dt1[i]);

	printf("Enter Date 2(dd mm yyyy): ");
	for(i=0; i<=2; i++) scanf("%d",&dt2[i]);

	daysIn1 = calcDaysIn(dt1);
	daysIn2 = calcDaysIn(dt2);
	days = daysIn1>daysIn2 ? daysIn1-daysIn2 : daysIn2-daysIn1;

	printf("No: of Days = %d\n",days+1);	
}
