#include <stdio.h>
#define ARTIKELMAXLENGTH 10
#define LAGERGROESSE 10

typedef struct Lager_
{
    char artikelname[ARTIKELMAXLENGTH];
    unsigned int anzahl;
} Lager;

int indexSuchen(Lager lagerinhalt[], char suchstring[])
{
    int leerer_index = LAGERGROESSE;
    for (int i = 0; i < LAGERGROESSE; i++)
    {
        if (strcmp(lagerinhalt[i].artikelname, suchstring) == 0)
        {
            return i;
        }
        if (lagerinhalt[i].anzahl == 0)
        {
            leerer_index = i * -1;
        }
    }
    return leerer_index;
}
void add_artikel(Lager lager[LAGERGROESSE], char artikel2add[ARTIKELMAXLENGTH], int index)
{
    if (index < 0)
    {
        printf("Der Artikel wird dem Lager hinzugefügt.\n");
        int i = 0;
        while (artikel2add[i] != '\0'){
            lager[index * -1].artikelname[i] = artikel2add[i];
            i++;
        }
        //strcpy(lager[index * -1].artikelname, artikel2add);
        lager[index * -1].anzahl = 1;
    }
    else if (index == LAGERGROESSE)
    {
        printf("Das Lager ist leider voll! Bitte entnehmen Sie zuerst einen Artikel oder fügen sie ein Artikel hinzu der schon im Lager ist.\n");
    }
    else
    {
        printf("Der Artikel ist bereits vorhanden, die Anzahl wird um 1 erhöht.\n");
        lager[index].anzahl++;
        //printf("%s mit der Anzahl %i an der Stelle %i\n", lager[index].artikelname, lager[index].anzahl, index);
    }
}
void rm_artikel(Lager lager[LAGERGROESSE], char artikel2rm[ARTIKELMAXLENGTH], int index)
{
    if (index >= 0 && index != LAGERGROESSE && lager[index].anzahl > 0)
    {
        lager[index].anzahl--;
    }
    else
    {
        printf("Der angegebene Artikel ist entweder nicht vorhanden, oder der Bestand ist 0.");
    }
}
void lagerexport(Lager lager[LAGERGROESSE])
{
    unsigned int summe = 0;
    printf("--------LAGEREXPORT--------\n");
    printf("%-20s%-7s\n", "Artikelname", "Anzahl");
    for (int i = 0; i < LAGERGROESSE; i++)
    {
        if (lager[i].anzahl > 0){
            printf("%-20s%6i\n", lager[i].artikelname, lager[i].anzahl);
            summe = summe + lager[i].anzahl;
        }
    }
    printf("Summe = %i\n", summe);
}

void printmenu(){
    printf("-----------MENU-----------\n");
    printf("(1) Artikel hinzufügen\n");
    printf("(2) Artikel entnehmen\n");
    printf("(3) Eintrag suchen\n");
    printf("(4) Lager export\n");
    printf("(5) Dieses Menü ausgeben\n");
    printf("(6) Programm beenden\n");
}

int main()
{
    int eingabe;
    Lager lager[LAGERGROESSE];
    for (int i = 0; i < LAGERGROESSE; i++)
    {

        lager[i].anzahl = 0;
    }

    char eing[ARTIKELMAXLENGTH];
    int index;

    printf("Programm Lagerverwaltung | jbachma2\n\n");
    printmenu();
    do
    {
        scanf("%i", &eingabe);
        fflush(stdin);
        switch (eingabe)
        {
        case 1:
            printf("Bitte geben sie den Artikel ein den sie hinzufügen möchten: ");
            scanf(" %s", eing);
            fflush(stdin);
            index = indexSuchen(lager, eing);
            add_artikel(lager, eing, index);
            break;
        case 2:
            printf("Bitte geben sie den Artikel ein den sie herausnehmen möchten: ");
            scanf(" %s", eing);
            fflush(stdin);
            index = indexSuchen(lager, eing);
            rm_artikel(lager, eing, index);
            break;
        case 3:
            printf("Bitte geben Sie den suchenden Artikel ein: ");
            scanf(" %s", eing);
            fflush(stdin);
            index = indexSuchen(lager, eing);
            if (index < 0 || index == LAGERGROESSE)
            {
                printf("Der Artikel konnte nicht gefunden werden.");
            }
            else
            {
                printf("-----%s-----\n", lager[index].artikelname);
                printf("Anzahl:\t%i\n", lager[index].anzahl);
            }
            break;
        case 4:
            lagerexport(lager);
            break;
        case 5:
            printmenu();
            break;
        case 6:
            return 1;
            break;
        default:
            printf("Diese eingabe war invalid\n");
            break;
        
        }

    } while (eingabe != 6);
}

