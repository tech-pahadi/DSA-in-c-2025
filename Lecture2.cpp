#include <iostream>
using namespace std;

int main(){

    // vote or not depend on age 

    // int age ;

    // cout << "Enter your age: " << "\n";
    // cin >> age;

    // if (age>=18)
    // {
    //     cout << "You can vote" << endl;
    // } else
    // {
    //     cout << "Not elligible you are under 18" << endl;
    // };


    // Number is odd or even 

    // int x;

    // cout << "Enter a number x: " << "\n";
    // cin >> x;

    // if (x%2 == 0)
    // {
    //     cout << "The number is even" << endl;
    // } else
    // {
    //     cout << "The number is odd" << endl;
    // };


    // Depend on marks we grade

    // int marks;

    // cout << "Enter your marks: " << "\n";
    // cin >> marks;

    // if (marks >= 90)
    // {
    //     cout << "A" << endl;
    // } else if ( marks < 90 && marks >= 80 )
    // {
    //     cout << "B" << endl;
    // } else if ( marks < 80 && marks >= 70 )
    // {
    //     cout << "c" << endl;
    // } else
    // {
    //     cout << "D" << endl;   
    // };


    // find the character is lowercase or uppercase 

    // char character;

    // cout << "Enter the character: " << "\n";
    // cin >> character;

    // int chstore = character;


    // if (character >= "A" && character <="Z" )
    // {
    //     cout << "Character is uppercase" << endl;
    // } else 
    // {
    //     cout << "Character is Lowercase" << endl;
    // };


    // so here in actual the implicit type concersion use 

    // if (chstore >= 65 && chstore <=90 )
    // {
    //     cout << "Character is uppercase" << endl;
    // } else 
    // {
    //     cout << "Character is Lowercase" << endl;
    // };


    // Ternary operator 

    // int y;
    // cout << "Input number: " << endl;
    // cin >> y;

    // cout << (y >=0 ? "Positive number" : "Negative number") << endl;



    // while loop 

    // print number 1 to 5

    // int count = 1;

    // while(count<=5){
    //     cout << count << " ";
    //     count++;
    // }; 
    // cout << endl;



    // print number 1 to n

    // int n;
    // cout << "Input number: " << endl;
    // cin >> n;
    // int count = 1;

    // while(count<=n){
    //     cout << count << " ";
    //     count++;
    // }; 
    // cout << endl;



    // for loop 


    // print number 1 to n

    // int n;
    // cout << "Input number: " << endl;
    // cin >> n;

    //  for(int i=1;  i<=n; i++){ 
    //     cout << i << " ";
    // };

    // cout << endl ;


    // sum of number from 1 to n using for loop 

    // int sum = 0;
    // int n;
    // cout << "Input number: " << endl;
    // cin >> n;

    //  for(int i=1;  i<=n; i++){ 
    //     sum = sum + i;
    // };
    // cout << "Total sum is: "<< sum << endl;


    // same thing do with while loop 

    // int sum = 0;
    // int n;
    // cout << "Input number: " << endl;
    // cin >> n;
    // int i = 1;
    // while(i<=n){ 
    //     sum = sum + i;
    //     i++;
    // };
    // cout  << "Total sum is: "<< sum << endl;


    // break and continue keywords( are special reseved words - keywords )

    // int sum = 0;
    // int n;
    // cout << "Input number: " << endl;
    // cin >> n;

    //  for(int i=1;  i<=n; i++){ 
    //     sum = sum + i;
    //     if (i == 5){
    //         break;
    //     }
    // };
    // cout << "Total sum is: "<< sum << endl;


    // sum of all odd numbers from 1 to n

    // int sum = 0;
    // int n;
    // cout << "Input number: " << endl;
    // cin >> n;

    //  for(int i=1;  i<=n; i += 2){ 
    //     sum = sum + i;
    // };
    // cout << "Total sum is: "<< sum << endl;


    // another way to solve this 

    // int sum = 0;
    // int n;
    // cout << "Input number: " << endl;
    // cin >> n;

    //  for(int i=1;  i<=n; i++){ 
    //     if (i%2 != 0)
    //     {
    //         cout << i << " ";
    //         sum = sum + i;
    //     };
    // };
    // cout << endl;
    // cout << "Total sum is: "<< sum << endl;


    // using while loop - sum of all odd numbers from 1 to n

    // int sum = 0;
    // int n;
    // cout << "Input number: " << endl;
    // cin >> n;
    // int i = 1;
    // while(i<=n){ 
    //     if (i%2 != 0)
    //     {
    //         cout << i << " ";
    //         sum = sum + i;
    //     };
    //     i++;
    // };
    // cout << endl;
    // cout << "Total sum is: "<< sum << endl;



    // using for loop - sum of all even numbers from 1 to n

    // int sum = 0;
    // int n;
    // cout << "Input number: " << endl;
    // cin >> n;

    //  for(int i=1;  i<=n; i++){ 
    //     if (i%2 == 0)
    //     {
    //         cout << i << " ";
    //         sum = sum + i;
    //     };
    // };
    // cout << endl;
    // cout << "Total sum is: "<< sum << endl;


    // do-while loop 

    // do{
    //    cout << "Hello negi" << endl; 
    // }while(3>5);


    // print number 1 to n using while loop

    // int i = 1;
    // int n;
    // cout << "Input number: " << endl;
    // cin >> n;
    // do{
    //    cout << i << " " ;
    //    i++;
    // }while(i<=n);

    // cout << endl; 



    // check if a number is prime or not 


    // int n;
    // cout << "Input number: " << endl;
    // cin >> n;
    // bool boolIsPrime = true;

    // for(int i=2;  i<=(n-1); i++){ 
    //     if (n%i == 0)
    //     {
    //         boolIsPrime = false;
    //         break;
    //     };
    // };

    // if(boolIsPrime == true )
    // {
    //     cout << "is a prime number" << endl;
    // }else{
    //     cout << "is not a prime number" << endl;
    // };

    // there are 2 more ways to do this 


    // int n;
    // cout << "Input number: " << endl;
    // cin >> n;
    // bool boolIsPrime = true;

    // for(int i=2;  i<=sqrt(n); i++){ 
    //     if (n%i == 0)
    //     {
    //         boolIsPrime = false;
    //         break;
    //     };
    // };

    // if(boolIsPrime == true )
    // {
    //     cout << "is a prime number" << endl;
    // }else{
    //     cout << "is not a prime number" << endl;
    // };


    // 2nd way 

    // int n;
    // cout << "Input number: " << endl;
    // cin >> n;
    // bool boolIsPrime = true;

    // for(int i=2;  i*i<=n; i++){ 
    //     if (n%i == 0)
    //     {
    //         boolIsPrime = false;
    //         break;
    //     };
    // };

    // if(boolIsPrime == true )
    // {
    //     cout << "is a prime number" << endl;
    // }else{
    //     cout << "is not a prime number" << endl;
    // };


    // Nested loop 

    int n,m;
    cout << "Input rowa: " << endl;
    cin >> n;
    for( int i=1 ; i<=n; i++){
        int m = 5;
        for(int i=1 ; i<=m; i++){
            cout << "*"<<" ";
        };
        cout << endl;
    };
    

    // int n,m;
    // cout << "Input rowa: " << endl;
    // cin >> n;
    // cout << "Input columns: " << endl;
    // cin >> m;
    // for( int i=1 ; i<=n; i++){
    //     for(int j=1 ; j<=m; j++){
    //         cout << "*"<<" ";
    //     };
    //     cout << endl;
    // };

    
};