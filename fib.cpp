# include <iostream>
using namespace std;

int main (){
    int a = 0 , b = 1 ;
   

    int n  ;
    cout << "Enter the value of n" <<endl;
    cin >> n;
    cout << a << " " << b <<" ";

    for (int i = 1 ; i <= n ; i ++){
        int nextNumber = a + b ;

        a = b ;
        b = nextNumber;

        cout << nextNumber << " ";

    }
}