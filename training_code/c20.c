#include<stdio.h>
int
main ()
{
  char s[9][2][30] = {
    {"3 musketeers", "Sriharan Satya Ashik"},
    {"Amana", "Rider of the Last Ark!"},
    {"Jeffrin", "Need Aspirin?"},
    {"Jose", "Missing in Action"},
    {"Gayatri", "Ghost in NH"},
    {"Jabber", "Blabber"},
    {"Fathima", "TE Sultana"},
    {"Subitha", "Trajedy queen"},
    {"Maria", "TE Marilyn"}
  };


  int i, j;

  for (i = 0; i <= 8; i++)
    {
      for (j = 0; j <= 1; j++)
	{
	  printf ("s[%d][%d]=%s\n", i, j, *(*(s + i) + j));
	}
      printf ("\n\n");
    }

}
