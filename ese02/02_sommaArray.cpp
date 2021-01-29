//Ok manca parte palindromi
#include <iostream>

#define N 10 //così si scrive solo qui, N non è una variabile

using namespace std;

int main()
{
    int numbers[N];
    int count = 0;

    cout << "Insert "<<N<<" numbers: "<<endl;
    for (int i = 0; i < N; i++){
        cin>>numbers[i];
        if (numbers[i]==0)
            break;
        count++;
    }

    int sum = 0;

    for (int i = 0; i < count; i++){
        sum += numbers[i];
    }

    cout<<"Sum ="<<sum<<endl;

}