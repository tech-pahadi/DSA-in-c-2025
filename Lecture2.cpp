#include <iostream>
using namespace std;

int main()
{

    // vote or not depend on age 

    int age ;

    cout << "Enter your age: " << "\n";
    cin >> age;

    if (age>=18)
    {
        cout << "You can vote" << endl;
    } else
    {
        cout << "Not elligible you are under 18" << endl;
    };


    // Number is odd or even 

    int x;

    cout << "Enter a number x: " << "\n";
    cin >> x;

    if (x%2 == 0)
    {
        cout << "The number is even" << endl;
    } else
    {
        cout << "The number is odd" << endl;
    };


};