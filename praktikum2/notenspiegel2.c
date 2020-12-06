#include <stdio.h>

int main(){
    int notenarray[5];
    printf("\nProgramm Notenspiegel\n\n");
    int i;
    for(i = 0; i <= 4; i++){  
	    printf("Bitte geben sie die Anzahl der Arbeiten mit der Note %i ein: ", i + 1 );
	    scanf("%i", &notenarray[i] );
    }
    printf("\nDer Notenspiegel sieht dann so aus:\n\n");
    printf("%-10s%-10i%-10i%-10i%-10i%-10i%-10s", "Note",1,2,3,4,5,"Gesamt");
    printf("\n");
    int gesamt = 0;
    int produkt_note_anzahl = 0;
    for(i = 0; i <= 6; i++){
    	if( i == 0 ){
		printf("%-10s", "Anzahl");
	}
	else if(i == 6){
		printf("%-10i", gesamt);
	}
	else{
		printf("%-10i", notenarray[i - 1]);
		gesamt += notenarray[i - 1];
		produkt_note_anzahl += notenarray[i - 1] * i;
	}
    }
    printf("\n\n");
    printf("Durchschnittsnote: %.1f\n\n", produkt_note_anzahl / (float)gesamt);
    printf("Durchfallquote: %.1f %%\n", notenarray[4] / (float)gesamt * 100);
    return 0;
}
