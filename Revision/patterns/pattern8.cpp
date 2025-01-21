# include <iostream>
using namespace std;

int main (){
    int n ;
    cout << "Enter the value of n "<<endl;
    cin >> n ;
    int row , col;

    for (row = 1 ; row <= n ; row ++){
        int value = row;
        for (col = 1 ; col <= row ; col ++){
            cout << value  << " ";
            value = value + 1;
           
        }
        cout << endl;
    }
}