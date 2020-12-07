#include <stdio.h>
#include <stdlib.h>

int main(){
    int jahresinput;
    printf("\nProgramm Schaltjahr | jbachma2\n\n");
    printf("Bitte geben sie eine Jahreszahl ein: ");
    scanf("%i", &jahresinput);
    fflush(stdin);

    if (jahresinput % 4 == 0 && !(jahresinput % 100 == 0)){
        printf("\n%i ist ein Schaltjahr!\n\n", jahresinput);
    }
    else if (jahresinput % 100 == 0 && !(jahresinput % 400 == 0)){
        printf("\n%i ist kein Schaltjahr!\n\n", jahresinput);
    }
    else if (jahresinput % 400 == 0){
        printf("\n%i ist ein Schaltjahr!\n\n", jahresinput);
    }
    else {
        printf("\nDa hat etwas nicht geklaptt :/\n");
    }
}