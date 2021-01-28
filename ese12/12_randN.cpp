/*
SUB che sceglie un numero a random tra 1 e 1000. Usare la funzione rand per fare questo. 
L'utente poi inserisce numeri ntanto che non azzecca la risposta corretta. 
Il programma guida l'utente rispondendo
se il tentativo era maggiore o minore del numero estratto. 
È una ricerca di tipo binario.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main( )
{
    int number;
    int n;

    number = 1 + rand () % 10;

    cout << "Try to match the number! " << endl;
    do {
        cin >> n;
        //for (int i = 1; i <= 1000; i++){

        if (n == number){
            cout << "You win!!" << endl;
            break;
            }
        
        else {
            if (n > number)
                cout << "Too big! Try again!" << endl;
            else
                cout << "Too small! Try again!" << endl;
            }
        //}
    }
    while (n != 0);
}
