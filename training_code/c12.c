#include <stdio.h>
#include <unistd.h>

int fuel = 5;

int CheckFuel (){
  if (fuel < 1) return 0;
  else return 1;
}

void Vibing (){
  switch (fuel){
    case 5:
      printf ("FUEL GUAGE:(##########)\n");
      break;
    case 4:
      printf ("FUEL GUAGE:(########__)\n");
      break;
    case 3:
      printf ("FUEL GUAGE:(######____)\n");
      break;
    case 2:
      printf ("FUEL GUAGE:(####______)\n");
      break;
    case 1:
      printf ("FUEL GUAGE:(##________)\n");
      break;
  }
}

void main (){
  do{
      Vibing ();
      printf ("Vibing....\n\n");
      fuel--;
      sleep (3);
  } while (CheckFuel ());

  printf ("FUEL GUAGE:(__________)\n");
  printf ("Vibing Over Yaar!!\n");
}
