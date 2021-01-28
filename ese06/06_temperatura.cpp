#include <iostream>
#include <iomanip>

using namespace std;

float fahrenheit (float x);

int main ()
{
    float temp = -40;
    cout<<"Celsius:"<<setw(20)<<"Fahrenheit:"<<endl;
    do
    {
        cout<<temp<<" C"<<setw(20)<<fahrenheit(temp)<<" F"<<endl;
        temp += 0.25;
    }
    while (temp <= 250);
    
    return 0;
}

float fahrenheit (float x)
{
    float tempF = (x*(9/5))+32;
    return tempF;
}