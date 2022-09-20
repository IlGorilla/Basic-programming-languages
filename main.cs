using System; 
using System.Collections.Generic;
using System.Linq; 
using System.Text; 
using System.Threading.Tasks;

namespace Learning 
{
    class Program
    {
        static void Main(string[] args) //fondamentale e indispensabile come in java
        {
            
            Console.WriteLine("Hello World"); //specifico quello che voglio stampare, ; sono obbligatorie
            //ìConsole.ReadLine();//!devo inserire questa linea di codice perche se no subito dopo aver stampato "Hello World" mi si chiude il prompt, ORA STA ALLA FINE DEL PROGRAMMA
        
            //dichiarazione di variabili 
            string personaggio = "Nico";
            int age; 
            age = 20;             

            Console.WriteLine("Il suo nome è "+personaggio " e ha " +age+ " anni.");
            

            personaggio = "Giulia"; //sovrascritto la variabile
            Console.WriteLine("Il suo nome è "+personaggio ",\n ha " +age+ " anni.");
          

            char n = 's'; //char = un singolo carattere
            int numero = 0; //numero intero
            numero++; //incremento 
            numero--; //deecremento
            float virgola = 0.1; 
            double preciso = 0.0;
            decimal precisissimo = 0.0; //se ti servono tanti numeri dopo la virgola
            bool VeroOFalso = false;
            bool VeroOFalso = true; //valore booleano, quindi se la variabile è vera o falsa

            Console.WriteLine(numero); 
            
            Console.WriteLine(personaggio.Length); //stampa la lunghezza della stringa contenuta in personaggio
            Console.WriteLine(personaggio.toUpper()); //stampa la stringa contenuta in personaggio in maiuscolo 
            Console.WriteLine(personaggio.Contains("G")); //ritorna true or false se il parametro specificato si trova in personaggio 
            Console.WriteLine(personaggio[0]); //stampa il primo elemento della stringa contenuta in personaggio 
            Console.WriteLine(personaggio.IndexOf('i')); //stampa l'indice a cui si trova la lettera 'i'
            Console.WriteLine(personaggio.Substring(1,3)); //Stampo 3 elementi a partire dall' elemento presente all'indice 1

            Console.WriteLine(3+4); //stampo 7
            Console.WriteLine(5/3); //stampo un intero, quindi la divisione arrotondata
            Console.WriteLine(5/3.0); //stampo un float
            //esiste il metodo Math.
            Console.WriteLine(Math.Sqrt(16)); //radice quadrata di 16- stampa 4
            Console.WriteLine(Math.Max(16,4)); //il piu grande tra i due, è 16, stampera 16
            

        //input dall'utente

           Console.Write("What is tour name? "); //solo Write non va a capo
            string nome = Console.ReadLine();
            Console.WriteLine("Hello "+nome);
            


            int num = Convert.ToInt32("30"); //converto una stringa in un numero, con lettere da errore
            Console.WriteLine(num+5);  //Stampo la somma tra la variabile e 5 
            
            Console.Write("Inserisci un numero: ");
            int num1 = Convert.ToInt32(Console.ReadLine()); //mantengo l input e lo trasformo in intero
            Console.WriteLine(num1+8);
            
//array
            int [] numeri = {1,2,3,4,5,6,7,8,9,10}; 
            Console.WriteLine(numeri); //Stampo tutto l'array
            Console.WriteLine(numeri[0]); //stampo il primo elemento dell'array, ovvero 1  
            numeri[0] =100; //ho modificato l'elemento che si trova in posizione 0, prima era 1 ora è 100
            Console.WriteLine(numeri[0]);

            string[] friends = new string[2]; //Creo un array di 2 elementi
            friends[0] = "sam"; 
            friends[1] = "lola"; 
            

            //metodi 
            SayHi(); //posso creare un metodo anche dopo quello main (il metodo in cui chiamo), in questo linguaggio lo posso fare a differenza di C e C++
            Sum(3); //3 = int num

            bool isMale = true;
            bool isTall = false;

            if(isMale && isTall){ //Se sono entrambi veri, && = e
                Console.WriteLine("Male and Tall"); //Stampa questo se sono entrambi true
            }else if (isTall || isMale){ // || = o 
            Console.WriteLine("one and one"); //Stampa questo se almeno uno dei due è true
            }else{
                Console.WriteLine("Female"); //Stampa in tutti gli altri casi, in questo caso se sono entrambi false

//switch ha sempre la stessa sintassi di C, C++ e Java
//while ha sempre la stessa sintassi di C, C++ e Java
//for ha sempre la stessa sintassi di C, C++ e Java 
//try e catch ha sempre la stessa sintassi di C, C++ e Java

/*Se creo una classe Book, poi nel main faccio Book book = new Book();
e chiamo metodi e caratteristiche con book.ecc  
(come Java)

Anche il costruttore funziona allo stesso modo
*/

//metodo get e set 
/*
private string stringa; 

public string stringa{

    get{return stringa;}
    set{stringa = value;} //valute è un valore che do io quando vado a chiamare il metodo: book.stringa = "qua passo la stringa contenuta in value"
}

la sintassi del get e set è diversa rispetto a Java che chiede due metodi string GetStringa() e SetStringa(), il primo ritorna la stringa e il secondo imposta ls stringa 

*/
        //array 2d 
        int [,] griglia = { //non faccio [][] come il solito ma inserisco una virgola tra []
            {1,2}, 
            {3,4}, 
            {5,6}
        }
            
            Console.ReadLine();
        }
        
        
        //metodo 
        static void SayHi(){ //void = non ritorna alcun valore
            Console.WriteLine("Hi"); 
        }
        
        static int Sum(int num){ //passo un parametro che specifico quando chiamo il metodo nel Main
            int sum = sum +5; 
            Console.WriteLine(sum); //stampo la somma tra il parametro e 5 
            return sum; //ritorno un intero, non stampa
        }
    }
}


//! static vuol dire che quel metodo o caratteristica appartiene alla classe stessa e che quindi posso fare: nomeClasse.metodostatico(eventuali parametri) o caratteristicastatica
//! in poche parole mi da la possibilita di evitare la creazione di un oggetto di quella classe 


//l'ereditarieta ha la stessa sintassi di C++