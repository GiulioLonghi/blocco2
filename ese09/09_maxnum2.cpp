//Modificare il programma precedente in modo che trovi i due numeri più grandi

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
    cout<<"The first biggest number is: "<<numbers[massimo]<<endl;

    numbers[massimo] = 0;

    int massimo2 = max(numbers);
    cout<<"The second biggest number is: "<<numbers[massimo2]<<endl;


    return 0;
}


int max (int array [dim])
{
    int y, max;
    max = array [0];
    for (int i=1; i<10; i++){
        if (array[i]>max){
            max = array[i];
            y = i;
        }
    }
    return y;
}