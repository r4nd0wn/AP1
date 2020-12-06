#include <stdio.h>
#include <stdlib.h>

int main() {
  #define GROESSE_DIM1 2
  #define GROESSE_DIM2 6

  int wuerfelwert[GROESSE_DIM1][GROESSE_DIM2] = {0};
  int i, zwischensp, ergebnis = 0, blocker = 0;

  printf("\nProgramm Würfelspiel | jbachma2\n\n");

  for (i = 0; i <= 4; i++) {
    printf("Würfel %i: ", i + 1);
    scanf("%i", & zwischensp);
    fflush(stdin);
    wuerfelwert[0][i] = zwischensp;
    wuerfelwert[1][zwischensp - 1]++;
  }
  printf("\nEs wurde gewürfelt:\n\n");
  printf("%-11s%-10i%-10i%-10i%-10i%-10i", "Würfel", 1, 2, 3, 4, 5);
  printf("\n");
  printf("%-10s", "Augenzahl");

  for (i = 0; i <= 5; i++) {
    if (i != 5) {
      printf("%-10i", wuerfelwert[0][i]);
    }

    switch (wuerfelwert[1][i]) {
    case 5:
      ergebnis = 5;
      blocker = 1;
      break;
    case 4:
      ergebnis = 4;
      blocker = 1;
      break;
    case 3:
      if (ergebnis == 2) {
        ergebnis = 1;
        blocker = 1;
      } else {
        ergebnis = 3;
      }
      break;
    case 2:
      if (ergebnis == 3) {
        ergebnis = 1;
        blocker = 1;
      } else {
        ergebnis = 2;
      }
      break;
    }
  }

  printf("\n\n");

  switch (ergebnis) {
  case 5:
    printf("Gewonnen! Sie haben ein Grand geworfen!\n"); break;
  case 4:
    printf("Gewonnen! Sie haben ein Poker geworfen!\n"); break;
  case 1:
    printf("Gewonnen! Sie haben ein Full House geworfen!\n"); break;
  case 2:
    printf("Nix Gewonnen! Aber immerhin ein Pasch"); break;
  case 0:
    printf("Nix Gewonnen!"); break;
  case 3:
    printf("Nix Gewonnen! Aber immerhin ein Drilling."); break;
  }
  return 0;
}
