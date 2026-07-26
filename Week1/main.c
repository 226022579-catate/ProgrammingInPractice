#include <stdio.h>

int main() {
    
    char municipality [50], mayor[50], surname[50];
    int population;

    printf("\t%3.s_______________________________________\n\a");
    printf("\t%1.s/%41.s\\\n");
    printf("\t|%2.sMunicipal Financial Management System%4.s|\n\a");
    printf("\t%1.s\\%1.s_______________________________________%1.s/\n\a");
    printf("\t%2.s+---------------------------------------+\n");
    printf("\t%2.s|%4.sWelcome to Windhoek Municipality%3.s|\n");
    printf("\t%2.s+---------------------------------------+\n");

    printf("\t%2.s|Enter Municipality Name:%15.s|\n\t%2.s|");
    scanf("%s", &municipality);
    printf("\a\t%2.s|Enter Mayor:%27.s|\n\t%2.s|");
    scanf("%s %s", &mayor, &surname);
    printf("\a\t%2.s|Enter Population:%22.s|\n\t%2.s|");
    scanf("%d", &population);
    printf("\t%2.s|%39.s|\n");

    printf("\a\t%2.s+---------------------------------------+\n");
    printf("\t%2.s|%39.s|\n");
    
    printf("\t%2.s|Municipality: %s", ' ', municipality);
    printf("\n\t%2.s|Mayor: %s %s", ' ', mayor, surname);
    printf("\n\t%2.s|Population: %d", ' ', population);

    printf("\n\t%2.s|%39.s|");
    printf("\n\t%2.s+_______________________________________+\n");
    printf("\t%1.s/%41.s\\");
    printf("\n\t|%7.s*******PROGRAM FINISHED*******%6.s|\n\a");
    printf("\t%1.s\\%1.s_______________________________________%1.s/\n\n\a");

    return 0;

}
