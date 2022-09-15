#include <stdio.h>
#include <string.h>

void main(){
  char usr[] = "33328";
  char pswd[] = "p@ssword";
  char gusr[6], gpswd[9];
  int i;

  printf("username: ");
  scanf("%s",gusr);

  printf("password: ");
  scanf("%s",gpswd);

  if ((!strcmp(gusr,usr)) && (!strcmp(gpswd,pswd))) printf("Logged In\n");
  else printf("Invalid username or password\n"); 
}
