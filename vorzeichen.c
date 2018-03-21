#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	float a;

	// Einlesen der Zahl
	a = atof(argv[1]);
	

	// Abfrage positiv/negativ + Ausgabe
	
	if ( a >= 0)
		{
			printf("Die Zahl %f ist positiv\n", a);
		}
	else
		{
			printf("Die Zahl %f ist negativ\n", a);
		}

	
	return 0;
}
