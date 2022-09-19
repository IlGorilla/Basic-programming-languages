#include <stdio.h>
#include <stdlib.h>


//i metodi vengono letti dall alto verso il basso, stai attento perche non posso chiamare in
//un primo metodo un secondo che abbiamo creato sotto di esso. Perche questo sia possibile basta
//dichiarlo prima come "void metodo();" è il problema è risolto.

void metodoOFunzione(){
    printf("Questo è un metodo o funzione, stai attento con python a non confonderti con i nomi");
    }

    void secondo(char name[], int age){
    printf("Hello %s e hai %d anni\n", name, age);
    }
   int primo();
int max(int num1, int num2);


//Creo una struttura di dati
struct Student{
char nome[50];
char cognome[50];
int age;
}; //ricordati il punto e virgola



int main()
{

    /*
    "%p" = puntatore
    "%f"= float
    "%s" = stringa
    "%d" = intero
    "%c" = char
    */
    printf("Hello world!\n");
    printf("\n");
    printf("%f", 500.9 + 45);
    printf("\n");
    printf("%f", pow(2,3));
    printf("\n");
    printf("%f", floor(2.45));
    printf("\n");
    const int num = 10; //con const la variabile non  puo essere piu cambiata;

    /*
    PRENDO UN INPUT DA CONSOLE
    */
    int eta;
    printf("Inserisci i tuoi anni: ");
    scanf("%d", &eta); //& è un puntatore
    printf("Hai %d anni", eta);


    //CREIAMO UN ARRAY
    int listaDiNumeri [] = {1,2,3,4,5,6,7,8,9};
    printf("\n%d", listaDiNumeri[0]);//stampo il primo elemento(tipo int) di listaDiNumeri con indice 0
    listaDiNumeri[0] = 12;
    printf("\n%d", listaDiNumeri[0]);

    printf("\n");
    printf("\n");
    char frase[20] = "1234567891234567891"; //massimo 20 elementi
    printf("%s", frase);

    printf("\n");
    metodoOFunzione();
    printf("\n");
    primo();
    max(4,5);

    struct Student student1;
    student1.age = 11; //con gli interi posso fare cosi
    strcpy(student1.nome, "Nico");  //con le stringhe devo usare uqesto modo perche student1.name = "nico" non funziona
    printf("%d", student1.age);


    int numero = 0;
    printf("%p", &numero);  //stampo l indirizzo in esadecimale a cui è registrata la variabile numero
    int *pnumero = &numero; //metto in pnumero l indirizzo di numero
    printf("%d", *pnumero); //stampo l indirizzo
    printf("%d", *&numero); //stampo il contenuto dell indirizzo, contenuto = * e indirizo = &


    //gestione di file

    FILE * fpointer = fopen("file.txt", "W");
    fprintf(fpointer, "HELLOOOO!");

    fclose();

    return 0;
}

int primo() {
        secondo("Nico",19);
    return 0;
    }

int max(int num1, int num2){
int result;
    if(num1>num2){
        result = num1;
    } else{
    result = num2;
    }
    return result;
}
