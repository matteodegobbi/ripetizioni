# Polimorfismo
Il polimorfismo è la proprietà di un oggetto/metodo di apparire in più forme.

Esistono due tipi di polimorfismo: compile-time e run-time.
## compile-time: 
Si tratta dell'uso di overloading per avere più forme dello stesso metodo ( trattato meglio nel file sull'overloading ). 

Viene chiamato compile-time perché Java sa già quale versione del metodo sovraccaricato dovrà usare quando compila. Lo capisce in base al tipo/quantità dei parametri passati al metodo.

## run-time:
È un tipo di polimorfismo che si usa con l'ereditarietà ( sia con `extends` che con le interfacce).

Quando noi stiamo usando l'ereditarietà possiamo ragionare a livello insiemistico cioè quando noi definiamo una classe con `extends` stiamo definendo una classe di oggetti più specifica a partire da una più generica, ad esempio da `Animale` definisco `Cane extends Animale`.

Ogni cane è un animale ( ma non viceversa un gatto è animale ma non cane ) quindi a livello insiemistico possiamo dire che a livello insiemistico la sottoclasse `Cane` è un sottoinsieme di `Animale`.

Nella realtà quindi ci possiamo riferire a un cane come un animale, questo si può fare anche in Java, cioè posso scrivere `Animale fidoAnimale=new Cane("fido")`.
Quindi abbiamo assegnato a una varibile `Animale` un oggetto `Cane` questo ha delle conseguenze:

1. Possiamo solo accedere ai metodi e campi definiti in `Animale` ( o che `Animale` eredita dalla sua superclasse se è presente ).

2. Quando chiamo un metodo che è stato definito in `Animale` ma di cui è stato fatto l'override in `Cane` verrà chiamata la versione presente in `Cane`.

3. Se avessimo anche degli oggetti di tipo `Gatto extends Animale` Java capirà da solo a run-time se deve usare la versione di un metodo presente in `Animale`, `Cane` o `Gatto` per questo viene chiamato polimorfismo run-time.

Quindi riassumendo:
se ho`Moto extends Veicolo` e `Automobile extends Veicolo` e in veicolo è definito il metodo `corri()` che viene ovverride da Moto e da Automobile il codice:

```java
class Veicolo{
    void corri(){sout("il veicolo corre")}
}
class Automobile extends Veicolo{
    @Override
    void corri(){sout("l'auto corre")}
}

class Moto extends Veicolo{
    @Override
    void corri(){sout("la moto corre")}
    void impenna(){}
}
void main(){
    Veicolo a = new Automobile();
    Veicolo m = new Moto();
    Veicolo v = new Veicolo();

    a.corri(); //scrive auto
    m.corri(); //scrive moto
    v.corri(); //scrive veicolo

    //non va perché m è contenuto in un Veicolo e quindi
    //può quindi possiamo usare solo metodi contenuti in Veicolo
    m.impenna(); 

}
```
TODO: casting, instanceof, getclass e errori.