all: project

clean: project main.o inserisci.o visualizza.o rimuovi.o
	rm -f project main.o inserisci.o visualizza.o rimuovi.o

project: main.o inserisci.o visualizza.o rimuovi.o
	gcc -o project main.o inserisci.o visualizza.o rimuovi.o

main.o: main.c
	gcc -c -o main.o main.c

inserisci.o: inserisci.c
	gcc -c -o inserisci.o inserisci.c
	
visualizza.o: visualizza.c
	gcc -c -o visualizza.o visualizza.c
	
rimuovi.o: rimuovi.c
	gcc -c -o rimuovi.o rimuovi.c
