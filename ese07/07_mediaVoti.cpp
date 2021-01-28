/*
SUP che calcola la media dei voti di un esame. 
Il programma si fa dare prima il numero totale di studenti,
poi i voti. Supporre un limite massimo di studenti.
*/

#include <iostream>

#define N 40

using namespace std;

int media (int array [N], int n);

int main ()
{
    int voti [N];
    int count = 0;

    cout << "Insert votes of students (max 40), push 0 to stop: "<<endl;
    for (int i = 1; i <= 40; i++){
        cin>>voti[i];
        if (voti[i]==0)
            break;
        count++;
    }

    int average = media (voti, count);
    cout<<"Average the "<<count<<" votes is: "<<average;
    return 0;
}


int media (int array [N], int n)
{
    int somma = 0, media;
    for (int i=0; i<=n; i++){
    somma += array[i];
    }
    media = somma/n;
    return media;
}