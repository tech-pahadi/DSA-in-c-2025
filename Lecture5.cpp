#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0 )
        {
            isPrime = false;
            break;
        };
    };

    if(isPrime == true )
    {
        cout << "is a prime number" << endl;
    }else{
        cout << "is not a prime number" << endl;
    };


    return 0;
};