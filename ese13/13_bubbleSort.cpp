// con funzione ricorsiva

#include <iostream>

using namespace std;

#define dim 10

void swap(int& a, int& b);

void orderMax(int array[], int p);

int main()
{
    int numbers[dim];

    cout << "Insert 10 numbers: " << endl;
    for (int i = 0; i < dim; i++)
    {
        cin >> numbers [i];
    }

    cout << "Array: " << endl;
    for (int i = 0; i < dim; i++)
    {
        cout << numbers [i] << " ";
    }
    
    orderMax (numbers, dim);

    cout << endl << "New array: " << endl;
    for (int i = 0; i < dim; i++)
    {
        cout << numbers [i] << " ";
    }
}

void swap(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}

void orderMax(int array[], int p)
{
    int pos = 0;
    for (int i = 0; i < dim-1; i++)
    {
        if (array [i] > array [i+1])
        {
            swap (array[i], array[i+1]);
            pos = i;
        }
        
    }
    if (pos > 0)
        orderMax (array, pos+1);

    
}