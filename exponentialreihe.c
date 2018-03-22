#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[])
{
  float expo;
  int i;	 					// "Genauigkeit"
  int b = 1;
  double Wert;
  int fakultaet = 1;
  unsigned int p = 1;		 			// p entspricht  
  printf("Bitte eine Zahl eingeben\n"); 
  scanf("%f", &expo);

  for (i = 0; i <= 10; i++)
  {	
	while (b <= i)
	{ 
		
		printf("f %i\n", fakultaet); 

		Wert = (double)p / fakultaet + Wert;
		printf("e hoch %f\nist gleich %f\n", expo, Wert); 
		p = expo * p;
		fakultaet = fakultaet * b;		
		printf("p %i\nb = %i\ni = %i\n", p,b,i); 
		b++;
	
	}
		
		 
  }	

  printf("e hoch %f\nist gleich %f\n", expo, Wert); 

  return 0;
}
