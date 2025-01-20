#include <iostream>
using namespace std;

int main(){


    int n = 5;
    for (int i = 0; i < n; i++)
    {
           char ch = 65;
        for (char j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        };
        cout << endl;
    };


    // Just my logic 

    // int column, row;
    // cout << "Input the columns: " << endl;
    // cin >> column;
    // cout << "Input the rows: " << endl;
    // cin >> row;

 
  
    // for (int i = 1; i <= column; i++)
    // {
    //        char ch = 65;
    //     for (char j = 1; j <= row; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     };
    //     cout << endl;
    // };
    

    return 0;
};