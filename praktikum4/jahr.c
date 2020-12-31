#include <stdio.h>
#include<time.h>

#define DATELENGTH 11

int eingabeZulassungsdatum(){
    char input_date[DATELENGTH];
    printf("Bitte geben Sie das Zulassungsdatum ein (tt.mm.jjjj): ");
    scanf(" %s",input_date);
    // char zum integer casten, ascii value abziehen, dann mit der jeweiligen zehnerpotenz multiplizieren
    return ((int)input_date[6] - 48) * 1000 + ((int)input_date[7] - 48) * 100 + ((int)input_date[8] - 48) * 10 + (int)input_date[9] - 48;
}

int alterBerechnung(int zulassungsJahr){
    time_t secs = time(NULL);
    return localtime(&secs)->tm_year + 1900 - zulassungsJahr;
}

void ausgabeAlter(int alter){
    printf("Das Auto ist %i Jahre alt.\n", alter);
}

int main(){
    printf("Programm zur Berechnung des Alters eines Autos | jbachma2\n");
    ausgabeAlter(alterBerechnung(eingabeZulassungsdatum()));
}
