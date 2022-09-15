#include<stdio.h>
#include<string.h>
struct PlaneInfo{
  char callSign[10];
  char Origin[25];
  char Destination[25];
  char aircraftType[10];
  int distance;
  float startTime;
  float ArrivalTime;
};

int main()
{
 struct PlaneInfo p[2];

strcpy(p[0].callSign,"IGO6476");
strcpy(p[0].Origin,"Kanpur");
strcpy(p[0].Destination,"Bangalore");
strcpy(p[0].aircraftType,"A320N");
p[0].distance = 1490;
p[0].startTime = 1.20;
p[0].ArrivalTime = 3.45;

strcpy(p[1].callSign,"VTI532");
strcpy(p[1].Origin,"Coimbatore");
strcpy(p[1].Destination,"New Delhi");
strcpy(p[1].aircraftType,"A320N");
p[1].distance =1950;
p[1].startTime = 3.25;
p[1].ArrivalTime = 6.05;
}
