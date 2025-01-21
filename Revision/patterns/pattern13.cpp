# include <iostream>
using namespace std;

int main (){
    int n ;

    cout << "Enter the value of n "<<endl;
    cin >> n ;

    int row , col ;

    for (row = 1 ; row <= n ; row ++){
        for (col = 1 ; col <= row ; col ++){
            char ch = 'A' + row - 1;

            cout << ch << " ";
    

        }
        cout << endl;
    }

}