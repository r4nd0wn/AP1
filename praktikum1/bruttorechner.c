#include <stdio.h>

int main() {
	printf("Programm zur Berechnung eines Bruttobetrages\n\n");
	float nettobetrag;
	printf("Bitte geben Sie den Nettobetrag in EUR ein: ");
	scanf("%f", &nettobetrag);
	printf("\n"); //blank line hinzufügen
	printf("Nettobetrag                  	= 	%08.2f EUR\n", nettobetrag);
	printf("Mehrwertsteuersatz 19.00 %%	= 	%08.2f EUR\n", nettobetrag * 1.19 - nettobetrag);
	printf("Bruttobetrag                	=       %08.2f EUR\n", nettobetrag * 1.19);
	return 0;
}


