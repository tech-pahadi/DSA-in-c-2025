#include <iostream>
using namespace std;

int main()
{
    cout << "hello ravi" << endl;
    cout << "hello ravi" << "\n";
    cout << "Ravinder" << "\n" << "Negi"<< "\n";


    int age = 25;
    cout << "Size of: " << sizeof(age) << "\n";


    // typecasting

    // implicit 

    char Val1 = 'A';
    int value = Val1;
    cout << "Implicit:" << value << "\n";

    // explicit 

    double Val2 = 100.99;
    int value2 = int(Val2);
    cout << "Explicit:" <<  value2 << "\n";



    // Input way 

    int age3;
    cout << "Please input the age: " << "\n";
    cin >> age3;
    cout << "Your age is: " << age3 << "\n";



    // Operators 

    // arthimetic 

    int a = 5, b = 2;
    cout << "a and b sum = "<< a+b << "\n";
    cout << "a and b subtraction = "<< a-b << "\n";
    cout << "a and b mult. = "<< a*b << "\n";
    cout << "a and b division = "<< a/b << "\n";
    cout << "a and b remainder.modulo = "<< a%b << "\n";

    cout << "divison behave diff in c++  = "<< a / (double)b << "\n";

    // relational

    cout << ( 3 > 5 ) << endl;  // 0 - false 
    cout << ( 5 > 3 ) << endl;  // 1 - true 
    cout << ( 3 >=5 ) << endl;  // 0 - false 
    cout << ( 5 >= 3 ) << endl;  // 1 - true 
    cout << ( 3 != 5 ) << endl;  // 1 - true 
    cout << ( 3 != 3 ) << endl;  // 0  - false 


    // logical ( OR / NOT / AND )

    cout << !( 3 == 3 ) << endl;  // 0 - false 


    // programmer - practice 1 

    // sum of 2 numbers 


    int x = 4, y = 5;
    cout << "Please input x and y value: " << "\n";
    cin >> x >> y;
    int sum = x + y;
    cout << "Sum of x and y is: " << sum << endl;

    cout << sum++ << endl;
    cout << ++sum << endl;



    return 0;
};