#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "funcs.h"
#define MAX 20
int main() {
	int scelta=1,i;
	for(i=0;i<MAX;i++) strcpy(Contatto[i].numero, "0");
	while(scelta!=0) {
		printf("RUBRICA\n");
		printf("[1] Inserisci contatto\n");
		printf("[2] Rimuovi contatto\n");
		printf("[3] Visualizza tutti i contatti\n");
		printf("[0] Chiudi il programma\n");
		printf("Inserisci scelta: ");
		scanf("%d",&scelta);
		switch(scelta) {
			case 1:
				inserisciContatto();
				break;
			case 2:
				rimuoviContatto();
				break;
			case 3:
				visualizzaContatti();
				break;
			case 0:
				printf("Programma chiuso con successo.");
				break;
			default:
				printf("\nRicontrolla il valore inserito.\n\n");
		}
	}
}