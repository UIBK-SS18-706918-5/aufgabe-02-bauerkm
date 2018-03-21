#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[])
{
  int a, i;
  long b = 1;


  if (argc == 2)
  {

   a = atof(argv[1]);
	
  	if (a >= 0)
  	{
   		for ( i = 1; i <= a; i++)
	
		{ 
			b = b * i;
		}
	


		   // Ausgabe
		   printf("%i! = %li\n", a, b);
   
	}
	else
	{
		   printf("Bitte eine natürliche Zahl eingeben\n");
	}
  }
  else
  {
	printf("Bitte nur eine natürliche Zahl eingeben\n");
  }

  return 0;
}
