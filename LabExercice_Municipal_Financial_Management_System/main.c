#include <stdlib.h>
#include <stdio.h>
    
void main() {
    
    char municipality[50], mayor[50], surname[50];
    int population;
	
	printf("\t%2.s=========================================\n\a");
	printf("\t%1.s|%2.sMunicipal Financial Management System%2.s|\n\a");
    printf("\t%2.s=========================================\n\n\a");
    
    printf("\t%2.s+---------------------------------------+\n");
    printf("\t%2.s|%5.sWelcome to Windhoek Municipality%2.s|\n");
    printf("\t%2.s+---------------------------------------+\n");
	printf("\t%2.s|Enter Municipality Name:%15.s|\n\t%2.s|");
    scanf("%s", &municipality);
    printf("\a\t%2.s|Enter Mayor:%27.s|\n\t%2.s|");
    scanf("%s %s", &mayor, &surname);
    printf("\a\t%2.s|Enter Population:%22.s|\n\t%2.s|");
    scanf("%d", &population);
	printf("\a\t%2.s+---------------------------------------+\n");
	
    printf("\n\t%2.s+---------------------------------------+\n");
    printf("\t%2.s|Municipality: %s", ' ', municipality);
    printf("\n\t%2.s|Mayor: %s %s", ' ', mayor, surname);
    printf("\n\t%2.s|Population: %d", ' ', population);
    printf("\n\t%2.s=========================================\n\a");

}
