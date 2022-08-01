# Overloading/Sovraccaricamento
Piú metodi possono avere lo stesso nome se hanno una firma diversa. La firma dei due o piú metodi può differire per numero di parametri o avere parametri di tipo diverso. 

Questo permette di avere piú metodi che fanno la stessa cosa ma con input diverso, ad esempio un metodo `printaMatrice(int[][] m)` e uno `printaMatrice(boolean [][] m)` entrambi formattano e printano una matrice ma uno accetta matrici di interi l'altro matrici di booleani.

L'overloading viene spesso usato con i costruttori degli oggetti in quanto può essere utile avere la possibilità di creare un oggetto partendo da dati diversi, ad esempio `Studente(String nome,String cognome,int eta)` o `Studente(String nome,String cognome, Date giornoDiNascita)`.

L'overloading è un tipo di polimorfismo a compile-time.