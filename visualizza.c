#include <stdio.h>
#include <string.h>
#include "struct.h"

extern struct contatto Contatto[MAX];

void visualizzaContatti() {
    int i,j=0;
	printf("\n");
    int s=0;
	for(i=0;i<MAX;i++) {
		if(strcmp(Contatto[i].numero, "0") != 0) s=1;
	}
	if(!s) {
        printf("\nNessun contatto registrato.\n\n");
        return;
    }
    for(i = 0; i < MAX; i++) {

        if(strcmp(Contatto[i].numero, "0") != 0) {
        	j++;
        	printf("CONTATTO N.%d\n",j);
            printf("NOME: %s\n", Contatto[i].nome);
            printf("COGNOME: %s\n", Contatto[i].cognome);
            printf("NUMERO: %s\n", Contatto[i].numero);
            printf("---------\n");
        }
    }
    printf("\n");
}
