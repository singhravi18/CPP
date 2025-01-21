# include <iostream>
using namespace std;

int main (){
    int n ;
    cout << "Enter the value of n "<<endl;
    cin >> n ;
    int row , col , count = 1;

    for (row = 1 ; row <= n ; row ++){
        for (col = 1 ; col <= row ; col ++){
           cout << count ++ << " ";
        }
        cout << endl;
    }
}