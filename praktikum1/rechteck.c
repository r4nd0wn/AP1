#include <stdio.h>

int main() {
	float seite_a;
	float seite_b;
	printf("Programm zur Berechnung des Umfanges und der Fläche von Rechtecken\n\n");
	printf("Bitte geben Sie die Seite a in cm ein: ");
	scanf("%f", &seite_a);
	printf("Bitte geben Sie die Seite b in cm ein: ");
	scanf("%f", &seite_b);
	float produkt = seite_a * seite_b;
	printf("\nDie Seite a ist %08.2f cm lang.\n", seite_a);
	printf("Die Seite b ist %08.2f cm lang.\n", seite_b);
	printf("Der Umfang des Rechtecks beträgt %08.2f cm.\n", seite_a * 2 + seite_b * 2);
	printf("Die Fäche des Rechtecks beträgt %08.2f cm^2.\n", seite_a * seite_b);
	return 0;
}


