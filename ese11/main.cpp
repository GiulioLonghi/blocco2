//#include "numP.hpp"
#include <iostream>

using namespace std;

int main()
{
    /*int numbers [1000];
    int numbersP [1000];

    for ( int i = 1; i <= 1000; i++)
        numbers [i-1] = i;

    for ( int i = 0; i < 1000; i++){
        if (isPerfect(numbers[i]))
            numbersP [i] = numbers [i];
    }

    cout << "Perfect numbers between 1 and 1000 are: " << endl;

    for ( int i = 0; i < 1000; i++)
        cout << numbers [i] << endl;*/

    int x = 0;
    int sum = 0;
    cout << "I numeri perfetti da 1 a 1000 sono: " << endl;
    for (int number = 1; number < 1000; number++) {
        for (int y = 1; y < number; y++) {
            x = number % y;
            if (x == 0) {
                sum += y;
                }   
        }
        
        if (sum == number)
            cout << sum <<"; ";     
            
        sum = 0;
    }
     
}