#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[])
{
  int a, i;
  int primzahl;


  if (argc == 2)
  {

   a = atof(argv[1]);
	
  	if (a >= 2)
  	{
   		for ( i = 2; i < a; i++)
	
		{ 
			primzahl = a % i;
		
			if (primzahl == 0)
			{
				i = a;
				printf("%i ist keine Primzahl\n", a);
			}
			
		}
		
		if (primzahl > 0)
		{
			printf("%i ist eine Primzahl\n", a);
		}
   
	}
	else
	{
		   printf("Bitte eine Zahl größer als 1 eingeben\n");
	}
  }
  else
  {
	printf("Bitte nur eine natürliche Zahl eingeben\n");
  }

  return 0;
}
