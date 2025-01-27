#include <stdio.h>
#include <string.h>
void visualizzaContatti() {
    int i,j=0;
	printf("\n");
    if(strcmp(Contatto[0].numero, "0") == 0) {
        printf("Nessun contatto registrato.\n\n");
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