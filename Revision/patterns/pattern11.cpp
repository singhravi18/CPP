# include <iostream>
using namespace std;

int main (){
    int n ;
    cout << "Enter the value of n "<<endl;
    cin >> n ;
    int row , col;
    int start = 'A';

    for (row = 1 ; row <= n ; row ++){

        for (col = 1 ; col <= n ; col ++){

            char ch = start ;

            cout << ch << " ";
            start= start + 1;
          
           
        }
        cout << endl;
    }
}