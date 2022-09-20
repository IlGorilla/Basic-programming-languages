"use strict";
/*alternative to JavaScript
    allow to use strict types
    support modern features and extra features
*/
exports.__esModule = true;
var mex = 'hello world';
console.log(mex);
//visto che il nostro file viene trattato come uno scypt e non come un modulo 
//allora io scrivo export{}
//!
/*
1.appena eseguo tsc main mi si crea il main.js
2. poi metto in main.ts l'export e rieseguo il main.ts, questo provoca dei cambiamenti in main.js e sono:
"use strict"; e exports.__esModule = true;
3. eseguo node main per avere in output il mex
*/
//tsc main --watch tiene d occhio i cambiamenti nel nostro file ts e poi lo modifica in js
//! Seconda parte di typescript
//le variabili 
var x = 10; // posso modificare il suo valore
x = 145;
//ma non posso scrivere let x = 34; per modificare solo il nome della variabile
var y = 25; //non posso in alcun modo modificare il suo valore
var z;
z = 2;
//non posso fare const p; e poi assegnare il valore; devo fare tutto insieme 
//TIPI DI VARIABILI 
var nome = ' nome'; //specifico il tipo di variabile(stringa)
var age = 2; //specifico il tipo di variabile(numero)
var uomo = false; //specifico il tipo di variabile(booleano)
var n = null; //specifico il tipo di variabile(null)
var u = undefined; //specifico il tipo di variabile(undefined)
/*
-sapendo che nome è una stringa, qualora io facessi nome. mi comparirebbero tutti i metodi
utilizzabili con le stringe
-sapendo che age è un numero, qualora io facessi age. mi comparirebbero tutti i metodi
utilizzabili con i number
-sapendo che uomo è un boolean, qualora io facessi uomo. mi comparirebbero tutti i metodi
utilizzabili con i boolean
*/
var lista1 = [1, 2, 3, 4]; //specifico il tipo di variabile(number[])
var lista2 = [1, 2, 3, 4]; //specifico il tipo di variabile(Array<number>)
//non c'è alcuna differenza tra i due tipi di dichiarazione di array
var persona = ['Billy', 30]; //l'array sarà popolato da due elementi, ovvero una stringa e un intero
var Colori;
(function (Colori) {
    Colori[Colori["Rosso"] = 0] = "Rosso";
    Colori[Colori["Verde"] = 1] = "Verde";
    Colori[Colori["Blu"] = 2] = "Blu";
    Colori[Colori["Giallo"] = 10] = "Giallo";
    Colori[Colori["Nero"] = 11] = "Nero";
})(Colori || (Colori = {}));
var r = Colori.Blu; //ottengo l indice a cui si trova il blu(2)
var e = Colori.Giallo; //ottengo 10 
var t = Colori.Nero; //ottengo 11 
var Random = true; //con any posso dargli qualsiasi valore, nelle prossime righe 
//gli conferisco tutti i valori che voglio 44
Random = 34;
Random = 'Billy';
var a; //ad a non assegno valore, per questo poi lo posso cambiare a piacimento
a = 10;
a = true;
var b = 10;
//b = 'rf'; //da errore perche sopra ho subito detto che è un numero, a differenza di a  
//posso assengare ad una variabile piu di un tipo con "union type"
var multitipo; //siamo sicuri che multiplo puo essere solo di questi due tipi e basta
multitipo = 20;
multitipo = 'ciao';
//multitipo. fara comparire una tendina con le proprieta di entrambi i tipi di dati
//!le funzioni
function add(num1, num2) {
    //valore di ritorno che non specifico quando vado a creare la funzione
    return num1 + num2;
}
add(8, 19);
function add2(num1, num2) {
    if (num2 === void 0) { num2 = 4; }
    //valore di ritorno che non specifico quando vado a creare la funzione
    return num1 + num2;
}
add2(8); //passo un solo parametro perche il secondo l ho gia definito quando vado a creare la funzione
function nomeCompleto(persona) {
    // un nome di tipo string e un cognome di tipo string
    console.log(" Lui si chiama ${persona.nome} ${persona.cognome}"); //chiamo i due parametri con ${variabile.parametro}
}
var per = {
    nome: "Luca",
    cognome: "Rossi"
};
nomeCompleto(per); //richiamo la funzione con per 
function nomeCompleto2(persona) {
    console.log(" Lui si chiama ${persona.nome} ${persona.cognome} e ha ${persona.age}");
}
var pers = {
    nome: "Luca",
    cognome: "Rossi",
    age: 20
};

