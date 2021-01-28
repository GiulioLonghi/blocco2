//SUP che calcola l'ipotenusa dati i due cateti
#include <iostream>
#include <cmath>
#include "powInt.hpp"

using namespace std;

int main ()
{
    int a, b;
    cout<<"Inserire due cateti: "<<endl;
    cin>>a>>b;

    a = powInt(a, 2);
    b = powInt(b, 2);

    int x=a+b;

    cout<<"Ipotenusa = "<<sqrt(x)<<endl;

}