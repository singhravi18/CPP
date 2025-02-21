# include <iostream>
using namespace std; 

int main (){
    int num = 5 ; 

    int *ptr = &num;// pointer initialization

    int *p = 0;
    p = &num;   // another way of initialising the pointer

    cout << &num << endl;
    cout << ptr << endl;


    cout << num << endl;
    cout << *ptr << endl;
}