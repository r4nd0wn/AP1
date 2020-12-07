#include <stdio.h>
#include <stdlib.h>

int main(){
    char matrix[5][5];
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            matrix[i][j] = '+';
        }
    }
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}