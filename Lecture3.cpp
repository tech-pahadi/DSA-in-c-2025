#include <iostream>
using namespace std;

int main(){

    // Square pattern ques. 1 

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //      char ch = 65;
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     };
    //     cout << endl;
    // };


    // Just my logic 

    // int column, row;
    // cout << "Input the columns: " << endl;
    // cin >> column;
    // cout << "Input the rows: " << endl;
    // cin >> row;

 
    // for (int i = 1; i <= column; i++)
    // {
    //       char ch = 65;
    //     for (int j = 1; j <= row; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     };
    //     cout << endl;
    // };



    // Square pattern for numbers ques. 2

    // int n = 5;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }; 
    //     cout << endl;
    // };

    // cout << "After pattern num value is: " <<num <<endl;

    // Square pattern for character ques. 2

    // int n = 3;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }; 
    //     cout << endl;
    // };

    // cout << "After pattern num value is: " <<ch <<endl;


    // Triangle pattern for stars

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j<i+1 ; j++)
    //     {
    //         cout << "* ";
    //     }; 
    //     cout << endl;
    // };


    // // Triangle pattern for numbers

    // int n = 5;
    // for (int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j<=i ; j++)
    //     {
    //         cout << i;
    //     }; 
    //     cout << endl;
    // };


    // Triangle pattern for character

    // int n = 5;
    // char ch = 'A';
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j<=i ; j++)
    //     {
    //         cout << ch << " ";
    //     }; 
    //     cout << endl;
    //     ch++;
    // };


    // Triangle pattern for character

    // int n = 5;

    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j<=i ; j++)
    //     {
    //         cout << j << " ";
    //     }; 
    //     cout << endl;
    // };



    // Reverse - triangle pattern for character

    // int n = 5;
    // for(int i = n; i>0; i--)
    // {
    //     cout << i << " ";
    // };
    // cout << endl;


    // int n = 5;
    // for(int i = 0; i<n; i++)
    // {
    //     for(int j = i+1; j>0 ; j--)
    //     {
    //         cout << j << " ";
    //     }; 
    //     cout << endl;
    // };



    // floyd's triangle pattern number


    // int n = 5;
    // int num = 1;
    // for(int i = 0; i<n; i++)
    // {
    //     for(int j = 1; j<=i ; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }; 
    //     cout << endl;
    // };


    // floyd's triangle pattern for character in reverse

    // int n =  5;

    // int ch = 65;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A'+ i;
    //     for (int j = i+1; j>0; j--)
    //     {
    //         cout << ch << " ";
    //         ch--;
    //     };
    //     cout << endl;    
    // };
    

    // floyd's triangle pattern number


    // int n = 5;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j>0; j--)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     };
    //     cout << endl;
        
    // };



    // inverted triangle pattern for number 

    // int n = 5;
    // for (int i = 0; i< n; i++)
    // {
    //     for (int j = 0; j<i; j++)
    //     {   
    //         cout << " ";
    //     };
    //     for (int j = 0; j<n-i; j++)
    //     {
    //         cout << i+1;
    //     }
    //     cout << endl;
    // };



    // inverted triangle pattern for charcter

    // int n = 5;
    // char ch = 'A';
    // for (int i = 0; i< n; i++)
    // {
    //     for (int j = 0; j<i; j++)
    //     {   
    //         cout << " ";
    //     };
    //     for (int j = 0; j<n-i; j++)
    //     {
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // };



    // Pyramid pattern for number

    // int n = 5;
    // for (int i = 0; i< n; i++)
    // {
    //     for (int j = 0; j<n-(i+1); j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j<=i  +1; j++)
    //     {
    //         cout << j;
    //     }
    //     for (int j = i; j>0; j--)
    //     {
    //         cout << j;
    //     };
    //     cout << endl;
    // };


    // Hollow diamond pattern for stars

    int n = 4;

    for (int i = 0; i < n; i++)
    {

        // Top part 

        // spaces
        for (int j = 0; j < n-(i+1); j++)
        {
            cout << " ";
        };

        cout << "*";

        if(i != 0)
        {
            // spaces
            for (int j = 0; j < 2*i-1 ; j++)
            {
                cout << " ";
            };
            cout << "*";
        };


        // bottom pattern 

        // spaces
        for (int j = 0; j < i+1; j++)
        {
            cout << " ";
        };

        cout << "*";

        if(i != 0)
        {
            // spaces
            for (int j = 0; j < 2  *i-1 ; j++)
            {
                cout << " ";
            };
            cout << "*";
        };

        
        cout << endl;


        
    };
    



    
    return 0;
};