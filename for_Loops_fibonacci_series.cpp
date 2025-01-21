# include <iostream>
using namespace std;

int main (){
    int a = 0 ;
    int b = 1 ;
    int nextNumber ;
    int n ;
    cout << "enter the number of terms"<<endl;
    cin >> n;
    cout << a << " "<< b << " ";

    for (int i = 2 ; i < n ; i ++){
        nextNumber = a + b ;
        a = b ;
        b = nextNumber ;

        cout << b << " ";
    }
}