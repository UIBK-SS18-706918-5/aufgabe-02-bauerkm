#include <stdio.h>
#include <stdlib.h>
#include <math.h>			// Eigentlich nicht notwendig, da 10^(-9) auch anders geschrieben werden kann



int main (int argc, char *argv[])
{
	
	float Eingabe = 0;
	long double Wert = 0;
	long double fakultaet = 1;
	long double Differenz = 10;
	long double Subtrahend = 0;
	long double Potenz = 1;
	int Zaehler;


	printf("Bitte eine Zahl eingeben.\n"); 
	scanf("%f", &Eingabe);

	printf("Ihre eingegebene Zahl lautet %f.\n",Eingabe);	
	
	for (Zaehler = 1; Zaehler <= 250; Zaehler++)
 	{	
		
		if (Differenz >= pow(10, -12))
		{ 		
			Wert = Potenz / fakultaet + Wert;				// Summanden der Exponentialreihe
			Potenz = Potenz * Eingabe;			
			fakultaet = fakultaet * Zaehler;		
			Differenz = Wert - Subtrahend;					// Differenz zwischen derzeitigem und vorherigem Summanden der Exponentialreihe
			Subtrahend = Wert;
			
			if (Differenz < 0) 						// "Betrag"
			{
				Differenz = (-1) * Differenz; 
			}
		
		}
		else
		{ 
			printf("e hoch %f = %Le\nDas Ergebnis weicht maximal um 10^-12 vom exakten Wert ab.\n",Eingabe, Wert);
			break;
		}
		
		if ((Zaehler == 200) && (Differenz > pow(10, -12)))
		{
			printf("Ein Richtwert für e hoch %f lautet %Le\nDas exakte Ergebnis ist größer und weicht um mehr als 10^-12 vom exakten Wert ab.\n",Eingabe, Wert);
		}

  	}	
	
  return 0;
}
