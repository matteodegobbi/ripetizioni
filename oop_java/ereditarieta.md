# Ereditarietà
### Cos'è?
In Java quando creiamo una classe possiamo ereditare metodi e campi da un'altra classe.

Diciamo che la classe che eredita è detta sottoclasse ( subclass ) e eredita dalla classe madre ( parent class oppure superclass ).
### Quando serve?
Può essere utile nel caso in cui abbiamo delle proprietà in comune tra piu classi che logicamente sono specializzazioni di una classe piu generica.

Ad esempio ho una classe `Automobile` che ha delle proprietà in comune  con `Camion` ma hanno anche dei metodi/campi esclusivi; quindi creiamo la classe `Veicolo` da cui erediteranno le proprietà in comune.
### Come si fa?
Per ereditare usiamo la parola chiave `extends` quando creiamo la classe: `class Camion extends Veicolo`.

La subclass eredita tutti i metodi e campi non-statici che siano `public`, `protected` o default/package ( se la subclass è nella stesso package della superclass ).

All'interno della sottoclasse si può accedere ai metodi e ai campi ereditati come se fossero definiti nella sottoclasse stessa.

In una sottoclasse è possibile definire nuovi metodi oppure modificare i metodi ereditati tramite overriding e l'annotazione `@Override`, guarda il file sul polimorfismo.

