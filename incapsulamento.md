# Incapsulamento/Information hiding
È un modo per nascondere informazioni (variabili e metodi) da chi usa la classe che si sta creando.
Su Java per utilizzare l'incapsulamento usiamo dei modifier davanti alle variabili/metodi/costanti, gli access modifier sono:
* `private`:si può accedere solo all'interno della stessa classe
* `protected`: si può accedere solo dall'interno dello stesso package o all'interno di classi figlie anche al di fuori del package
* default/package: si può accedere solo all'interno dello stesso package
* `public`: si può accedere da ovunque

I motivi per cui usiamo l'incapsulamento sono: 
1) Impedire errori dovuti alla modifica di una variabile nei momenti sbagliati
2) Fare in modo che venga inizializzata sempre con valori validi
3) Limitare la condivisione dello stato tra oggetti separati

L'information hiding però ci impedisce di sapere il valore di una variabile o modificarlo al di fuori della classe dove è stata creat,quindi se necessario creiamo dei metodi "getter" e "setter" per ogni campo messo a private.
### getter
I metodi getter restituiranno il valore della variabile settata a private oppure un valore derivato dalla variabile private 
(Ad esempio se ho un campo `maschio=true` posso non restituire `true` ma `'m'`).
### setter
I metodi setter servono per cambiare il valore di una variabile `private` effettuando gli opportuni controlli di validità dell'input,
cosa che non si può fare con un'assegnazione diretta
(Ad esempio se devo settare la variabile genere: accetto solo i valori: `'m'`, `'f'` e non altri valori non validi (e.g. `'z'`)).

Per i booleani i metodi getter avranno un nome del tipo `isMaschio()` o `hasNext()` mentre i non booleani avranno un nome del tipo 
`getNome()`. Mentre i setter avranno sempre un nome del tipo `setCognome()`.