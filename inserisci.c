#include <stdio.h>
#include <string.h>
void inserisciContatto() {
	int i;
	if(strcmp(Contatto[MAX].numero, "0") == 0) {
		printf("\n\nNumero massimo di contatti raggiunto.\n");
		return;
	}
	for(i=0;i<MAX;i++) {
		if(strcmp(Contatto[i].numero, "0") == 0) {
			printf("Inserisci il nome del contatto: ");
			scanf("%s",&Contatto[i].nome);
			printf("Inserisci il cognome del contatto: ");
			scanf("%s",&Contatto[i].cognome);
			printf("Inserisci il numero del contatto (10 caratteri): ");
			scanf("%s",&Contatto[i].numero);
			printf("\nContatto aggiunto con successo.\n\n");
			return;
		}
	}
}