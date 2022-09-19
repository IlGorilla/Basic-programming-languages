#include <iostream> //importa una libreria di nome iostream che prede input e permette di dare un output

using namespace std; //; è obbligatorio perche il compilatore legge una riga alla volta

class Persona{

public:  //Accessibile al di fuori del file
    int age;
    string name;

    void gioco(){
    cout<<name<<" sta giocando"<<endl;
    }
Persona(string namee, int agee){
    age = agee;
    name = namee;
cout<<"Questo è il costruttore della classe Persona"<<endl;
}
    void funzione();
};

//posso dichiarare un metodo di una classe anche al di fuori di essa, ecco come:

void Persona::funzione(){ //void perche la funzione è void all interno della classe, la funzione funzione appartiene
    //alla classe Persona
cout<<"Questo metodo è stato dichiarato fuori la classe;"<<endl;
}




int main() //funzione predefinita
{
    //Prima cosa fatta in c++
    cout << "Hello world!" << endl; //<< permette di concatenare
    cout << "prima linea" << "\n"<<"seconda linea" << endl; //concateno e endl termina la linea e va a quella successiva

    //Seconda casa fatta in c++

    //le variabili sono contenitori che salvano elementi di vario tipo al loro interno

    int age = 19; //variabile di tipo intero di nome age che contiene il valore 19
cout <<age<<endl;
age = 20;
cout <<age<<endl;
int numero = 2;
int somma = numero+age;
cout<<somma<<endl;

//terza cosa fatta in c++ : input

int numeroo;
cout<<"Inserisci un numero: "; //stampo stringa
cin>>numeroo;//chiedo il numero
cout<<"Il tuo numero e': "<<numeroo<<endl; //stampo stringa e numero dato in input

//quarta cosa fatta in c++:gli operatori

int somma1 = 100+50;
cout<<somma1<<endl;
int somma2 = somma1 + 3;
int somma3 = somma1 + somma2;
cout<<somma2<<endl;
cout<<somma3<<endl;

string nome = "Mario";
string cognome = "Rossi";
string nomeCompleto = nome+" "+cognome;
cout<<nomeCompleto<< endl;
cout<<nomeCompleto.size()<<endl; //è compreso lo spazio = 11

//Quinta cosa fatta in c++; indici

string frase = "1234"; //ci sono 4 elementi, l indice arriva a 3 perche parto a contare da 0
cout<<frase[0]<<endl;//va sempre a capo
cout<<frase[1]<<endl;//va sempre a capo
cout<<frase[2]<<endl;//va sempre a capo
cout<<frase[3]<<endl;//va sempre a capo

cout<<frase[0];//non va a capo
cout<<frase[1];
cout<<frase[2];
cout<<frase[3]<<endl
;//anche se metto ; non cambia nulla


    //i valore bool sono true e false, il primo corrisponde a 1 e il secondo a 0;

    //sesto argomento di c++: condizione if

    int number = 7;
    if(number > 10){
        cout<<"ok"<<endl;

    }else if(number == 5){
    cout<<"number equal to 5"<<endl;
    }
    else{
        cout<<"Mhe"<<endl;
    }

    //settimo argomento in c++

    int zero = 0;
    while (zero < 5){
            cout<<zero<<endl;
        cout<<"Il numero e' minore di 5"<<endl;
        zero++;
    }

    //ottavo argomento di c++: ciclo for

    for (int i = 0; i<10; i++){ //anche dentro il ciclo for servono ;;

        if(i == 4){
            continue;
        }else if(i==8){
        break;
        }else{
            cout<<i;
        }

        //nono argomento di c++:gli array

        //int numbers[4] = {1,2,3,4};
        //for (int k = 0; k<4;k++){
        //    cout<<numbers[k]<<endl;
        //}

        //nono argomento di c+: i puntatori

        string nomeNico = "Nico";
        string* puntatore = &nome; // *indica che la variabile è un puntatore e & che ci stiamo riferendo all'indirizzo di memoria
        cout<<nome<<endl;
        cout<<*puntatore<<endl;
        *puntatore = "Luca";
        cout<<*puntatore<<endl;

    }
    //decimo argomento di c++: la funzione; main è una funzione

    /*
    dobbiamo specificare il tipo di ritorno, il nome e le parentesi tonde che possono contenere parametri
    e poi le graffe in cui definiamo la sua logica;
    per richiamare la funzione scriviamo il suo nome con le tonde ed eventuali parametri e un punto e virgola.
    una funzione puo essere chiamata quante volte è necessario
    Dichiaro funzione = void funzione(){}
    Chiamo funzione = funzione(){}
    la posso chiamare solo dopo averla dichiarata oppure faccio cosi:
    -void funzione();
    -altra funzione che contiene funzione();
    -void funzione(){}
    se la funzione ha int invece che void devo ritornare un valore int e cosi via per gli altri dati
    se la funzione ha un parametro alla sua dichiarazione allora devo inserire il parametro quando vado a
    richiamare la funzione
*/

    Persona persona1(" ", 0); //Non inserisco nulla perche lo faccio nelle due righe successive
    persona1.age = 20;
    persona1.name = "Lorenzo";
    cout<<"Si chiama "<<persona1.name<< " e ha "<< persona1.age<<" anni"<<endl;
    persona1.gioco();
    persona1.funzione();
    Persona persona2("filippo", 30); //qua inserisco le caratteristiche della seonda persona


    //creazione di un file

    /*
    ofstream file("file.txt");
    file<<"Scrivo la mia prima riga sul file in questo modo"<<endl;
    file.close();//chiudo il file
*/

int z = 0;
    return z;
}

//ereditarietà

/*
class Mezzo{   //classe
float vmax;
Mezzo(float v){} //costruttore con parametro
vmax=v;  //variabile = parametro
float getVmax(){ //metodo che ritorna vmax
return vmax}
};

class Bici: public Mezzo { //Bici estende Mezzo e ne ottiene le caratteristiche
int dimensione;
public:
    Bici(int d, float v): Mezzo(v){
    dimensione =d;
    }
    float getDimensione()
    {
        return dimensione
    }

};
*/
