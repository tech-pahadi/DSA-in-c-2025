#include <iostream>
using namespace std;

// function defination
// void printHello(){
//     cout << "Hello world" << endl;
// }

// function defination
// int printHello2(){
//     cout << "Hello world 2" << endl;
//     return 3;
// }


// sum of two number using function

// int totalSum(int a, int b){
//     int total = a + b;
//     return total;
// }


// min of two number using function

// int minOfTwo(int a, int b){     // parameters
//     if(a < b){
//         cout << "A is smaller: ";
//         return a;
//         cout << endl;
//     }else{
//         cout << "B is smaller : ";
//         return b ;
//         cout << endl;
//     };
// };


// calulate the sum of 1 to n using function

// int sumOfN(int n)
// {
//     int sum  = 0;
//     for (int i = 1 ; i <= n; i++)
//     {
//         sum = sum + i;
//     };  
//     return sum;
// };


// calulate n factorial using function

// int nFactorial(int n)
// { 
//     int fact = 1;
//     for (int i = 1 ; i<=n; i++)
//     {
//         fact = fact * i;
//     };  
//     return fact;
// };


// pass by value 

// int totalSum(int a, int b){

//     a = 15; // a = 15
//     b = 14; // a = 14
//     int total = a + b;
//     return total;
// }


// sum of digits of a number using function

// int sumOfDigits(int num)
// {

    // using for  loop 
    // int  remainder = 0;
    // int digitSum1 = 0;
    // for (int i = 0; num>0 ; i++)
    // {
    //     remainder = num%10;
    //     num = num/10;
    //     digitSum1 = digitSum1 + remainder;
    // };

    // cout << digitSum1 << endl;
    // return 0;

    // using while loop 

    // int lastdigit = 0;
    // int digit = 0;
    // int digitSum = 0;
    // while(num>0)
    // {
    //     lastdigit = num % 10;
    //     num = num / 10;
    //     digitSum = digitSum + lastdigit;
    // };

    // cout << digitSum << endl;
    // return 0;
    
// };


//  calculate NcR binomial coeffecient for n&r using function

// first make a factorial 

int factNum (int num1)
{
    int fact = 1;
    for (int i = 1; i <= num1; i++)
    {
        fact = fact * i;
    }
    return fact;
    return 0;
    
};

int ncr(int n, int r)
{
    int fact_n = factNum(n);
    int fact_r = factNum(r);
    int fact_nmr = factNum(n-r);
    int total = fact_n/(fact_r*fact_nmr);
    return total;
    return 0;
};


int main(){

    // cout << "Hello world" << endl;


    // function 1 call/invoke 
    // printHello();


    // function 2 with return 3
    // int val = printHello2();
    // cout << "Return value is: " << val << endl;
    // or
    // cout << printHello2() << endl; 




    // sum of two number using function
    // cout << "Sum of 2 number's is = " << totalSum(2,3) << endl;


    // Min of two numbers using function
    // cout << minOfTwo( 2,3) << endl;   // arguments


    // calulate the sum of 1 to n using function

    // cout << sumOfN(5) << endl;
    // cout << sumOfN(10) << endl;


    // calulate n factorial using function
    // cout << nFactorial(4) << endl;
    // cout << nFactorial(5) << endl;


    // pass by value 

    // int x =4, y = 5;
    // cout << totalSum(x,y) << endl;
    // cout << x << endl;


    // sum of digits of a number using function

    // cout << "Sum = " << sumOfDigits(1234);


    // calculate NcR binomial coeffecient for n&r using function

    int n = 6;
    int r = 3;

    cout << "The nCr final value: " << ncr(n,r) << endl;

    return 0;
};