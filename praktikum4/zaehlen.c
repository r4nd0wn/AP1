#include <stdio.h>
#define BITARRAY_LENGTH 8

int sucheZeichen(const char s[], char c){
    int counter = 0;
    for(int i=0; i < sizeof(s); i++){
        if(c == s[i]){
            counter ++;
        }
    }
    return counter;
}

int laengeZeichenkette(const char s[]){
    return sizeof(s);
}

int main(){
    char eingabe*;
    char entscheidung, suche;
    int menu_blocker = 1;
    printf("Bitte Namen eingeben: ");
    scanf("%s", &eingabe);
    printf("%s hat %i Zeichen.", eingabe, laengeZeichenkette(eingabe));
    do
    {
        printf("Möchtest Du nach einem Buchstaben in %s suchen (j / n)? ");
        scanf("%c", &entscheidung);
        if (entscheidung == 'j'){
            printf("Bitte Buchstaben eingeben: ");
            scanf("%c", &suche);
            printf("Der buchstabe %c kommt %i-mal vor.\n", suche, sucheZeichen(eingabe, suche));
        }
    } while (entscheidung == 'j');
    printf("Auf Wiedersehen!\n");
    return 0;
}