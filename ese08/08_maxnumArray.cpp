/*
Trovare il numero più grande in un array è un problema ricorrente in programmazione. 
SUP che dati 10numeri, inseriti dall'utente, restituisce il numero più grande.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

#define dim 10

using namespace std;

int max (int array [dim]);

int main ()
{
    int numbers [dim]; 
    int massimo;

    cout << "Insert 10 numbers: "<<endl;
    for (int i = 0; i < 10; i++){
        cin>>numbers[i];
    }

    massimo = max(numbers);
    cout<<"The biggest number is: "<<massimo<<endl;

    return 0;
}


int max (int array [dim])
{
    int max = array [0];
    for (int i=1; i<10; i++){
        if (array[i]>max){
            max = array[i];
        }
    }
    return max;
}