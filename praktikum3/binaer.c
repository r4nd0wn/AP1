#include <stdio.h>
#include <stdlib.h>
#define BITARRAY_LENGTH 8

int dualrechner(int ganzzahl){
    int dualzahl[BITARRAY_LENGTH];
    for (int i = BITARRAY_LENGTH; i>=0; --i){
        dualzahl[i] = ganzzahl % 2;
        ganzzahl = ganzzahl / 2;
    }
    for (int i= 0 ; i<BITARRAY_LENGTH; ++i){
        printf("%i", dualzahl[i]);
        printf("\n");
    }
}

int main(){
    int eingabe;
    printf("Programm Dualzahl | jbachma2\n\n");
    printf("Geben Sie bitte eine ganze Zahl ein: ");
    scanf("%i", &eingabe);
    dualrechner(eingabe);

}