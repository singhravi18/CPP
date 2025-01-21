# include <iostream>
using namespace std;

int main (){
    int n ;

    cout << "Enter the value of n "<<endl;
    cin >> n ;

    int row , col ;

    for (row = 1 ; row <= n ; row ++){
        for (col = 1 ; col <= n ; col ++){
            char ch = 'A' + row + col - 2;

            cout << ch << " ";
    

        }
        cout << endl;
    }

}