#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{    
    char parola_segreta[50] = "parola";
    char parola_indovinata[50] = "------";
    
    for (int tentativo = 0; tentativo < 9; tentativo++)
    {
        char risposta;
        cout << "dimmi una lettera" << endl;
        cin >> risposta;
        cout << risposta << endl;
        int i=0;
        while (parola_segreta[i]!='\0')
        {
            if ( parola_segreta[i]==risposta)
            {
                parola_indovinata[i]=risposta;
            }
            i++;
        }
        cout << parola_indovinata << endl;
    }
}

