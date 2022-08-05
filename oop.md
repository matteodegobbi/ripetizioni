# OOP, Classi, Oggetti

## Programmazione ad oggetti
È un paradigma di programmazione basato sulla creazione di "oggetti" i quali interagiscono uno con l'altro tramite metodi.

È stato creato come estensione del paradigma procedurale per poter creare programmi modulari e aumentare il riutilizzo del codice ( nei programmi procedurali l'unico riutilizzo è chiamare le funzioni più volte ).

Gli oggetti verranno visti come tipo di dato "custom" definito dal programmatore, ad esempio come posso creare una variabile `int` potrò definire anche una variabile di tipo `Studente`.

La OOP ha 3 importanti concetti che sono approfonditi negli altri files     
1. Incapsulamento
2. Ereditarietà
3. Polimorfismo
___

## Classi
Per definire un nuovo tipo di oggetti dobbiamo creare una `class` che svolgerà il ruolo di "blueprint" per i nostri oggetti; 

Possiamo anche vedere una classe come una "fabbrica di oggetti". 

In Java creiamo una classe con la parola chiave `class`, il nome della classe (e.g. `Studente`),e le `{ }`. Il corpo della classe sarà compreso tra le due graffe.

I nomi delle classi in Java usano il PascalCase cioè la prima lettera di ogni parola va con la lettera maiuscola. (e.g. `ContoBancario`)

Gli oggetti che verranno creati con una certa classe vengono detti istanze di quella classe. ( e.g. tutti gli oggetti di tipo `Cane` sono instanze della classe `Cane` )

### Campi 
Sono delle variabili definite all'interno della classe, e rappresentano delle proprietà della classe o dell'oggetto

Ad esempio nella classe `Studente` il campo `cognome` è una proprietà dello studente.

### Metodi
Sono  funzioni definite all'interno di una classe, rappresentano un comportamento della classe o dell'oggetto.

Ad esempio nella classe `Studente` il metodo `studia(int ore)` è un comportamento dell'oggetto studente.

___
## Static e non-static
Metodi e campi possono avere il modifier `static` oppure no, va messo prima del tipo della variabile/funzione ad esempio `static int funzione()` oppure `static boolean variabile`.
 * Per i campi `static` indica che il campo è condiviso da tutte le istanze ( oggetti della classe ) e quindi se viene modificato cambierà per tutte le istanze. Se invece un campo non è `static` appartiene alla singola istanza quindi ogni oggetto avrà il suo campo e modificando il campo di una particolare istanza lo stesso campo delle altre istanze rimarrà invariato ( e.g. cambio il bilancio di un certo `ContoCorrente conto1 ` non cambierà per tutti i `ContoCorrente` ma solo per `conto1`)

 * Per i metodi `static` indica che il metodo è legato alla classe e non ad una particolare istanza: quindi userà solo variabili statiche, che si riferiscono all'intera classe. ( i metodi statici possono usare al loro interno solo variabili e metodi statici ). Un esempio di metodo statico è una funzione che calcola la radice quadrata di un numero: il metodo non è legato ad una particolare istanza della classe quindi lo mettiamo `static`. 
### Dot-notation
Per accedere ai campi e ai metodi di una classe utilizziamo la notazione del punto cioè:
* Per i metodi e campi `static` scriveremo `NomeClasse.nomeFunzione()` ( e.g. `Matematica.radiceQuadrata( double n )` )
* Per i metodi e campi non-`static` possiamo accedervi solo avendo creato una istanza della classe ad esempio: 
```
//Creo una istanza di Cane
Cane fido = new Cane("fido");

//nome è un campo non-statico
System.out.println(fido.nome);

//quindi accedo a nome usando una istanza di Cane
 ```
___
## Costruttori
I costruttori sono dei particolari metodi presenti all'interno di una classe che permettono di creare gli oggetti di quella classe.

I costruttori sono dei metodi speciali: non va messo il tipo di `return` del metodo e il nome del metodo deve essere uguale al nome della classe ( e.g. nella classe `class Cane` un possibile costruttore ha firma `Cane(String nome, int eta, String razza)`).

Di solito i costruttori inizializzano, direttamente o indirettamente, i campi dell'oggetto a dei valori passati da dove viene creato l'oggetto;
* direttamente se i valori dei campi vengono direttamente copiati dai parametri del costruttore 
* indirettamente se c'è qualche tipo di elaborazione dei parametri ( e.g. passo il parametro `String genere = "maschio"` ma il costruttore inizializza il campo al valore `char genere = 'm'`)

Si può ed è molto comune creare più costruttori per la stessa classe ( con firma diversa ) grazie all'overloading ( vedi file sull'overloading ).

Se in una classe non viene definito nessun costruttore Java usa da solo un costruttore di default che inizializza tutti i campi al valore default ( 0 per i valori numerici, `null` per gli oggetti, `false` per i booleani ecc... )

### Operatore `new`
Per creare un oggetto tramite un costruttore si usa l'operatore `new` che alloca la memoria nell'heap e invoca il costruttore

e.g. `Cane fido = new Cane("fido")`

___


# TO DO: polimorfismo, this, final, copy constructor, factory method, null, heap vs stack, ...