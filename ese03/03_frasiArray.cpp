// Modificare il programma 1.2 perché l'utente possa inserire 
// frasi anziché numeri, lunghe fino a 100 caratteri.

#include <iostream>
#include <string>

#define N 10 //così si scrive solo qui, N non è una variabile

using namespace std;

int main()
{
    string phrase[1000];

    for (int i = 0; i < N; i++){
        cout << "Insert sentence: "<<endl;
        cin>>phrase[i];
    }

    cout<<endl<<endl;

    cout<<"String =";
    for (int i = 0; i < N; i++){
        cout<<" "<<phrase[i];
    } 
}