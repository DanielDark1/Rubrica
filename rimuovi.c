#include <stdio.h>
#include <string.h>
#include "struct.h"

extern struct contatto Contatto[MAX];

void rimuoviContatto() {
	int s=0,i;
	for(i=0;i<MAX;i++) {
		if(strcmp(Contatto[i].numero, "0") != 0) s=1;
	}
	if(!s) {
        printf("\nNessun contatto registrato.\n\n");
        return;
    }
	int scelta,a=1;
	char numero[10],confirm;
	while(a) {
		printf("Inserisci il numero del contatto: ");
		scanf("%s",numero);
		for(i=0;i<MAX;i++) {
			if(strcmp(numero,Contatto[i].numero) == 0) {
	            printf("\n-------------\n");
				printf("CONTATTO TROVATO.\n");
	            printf("NOME: %s\n", Contatto[i].nome);
	            printf("COGNOME: %s\n", Contatto[i].cognome);
	            printf("NUMERO: %s\n", Contatto[i].numero);
	            printf("Desideri eliminarlo? (S/N): ");
	            scanf(" %c",&confirm);
		        if(confirm == 's' || confirm == 'S'){
		        	strcpy(Contatto[i].nome,"");
		        	strcpy(Contatto[i].cognome,"");
		        	strcpy(Contatto[i].numero,"0");
		        	printf("\nContatto eliminato con successo.\n\n");
		        	return;
				} else return;
			}
		}
		fflush(stdin);
		printf("\nNessun contatto trovato, desideri riprovare? (S/N): ");
		scanf(" %c",&confirm);
		if(confirm == 'n' || confirm == 'N') return;
	}
}
