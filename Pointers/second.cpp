# include <iostream>
using namespace std;

int main (){
    int arr [6] = {1 ,2 ,3 ,4 , 5, 6};

    //  int *ptr = arr;

    // int *p = arr;
    int (*p)[6] = &arr;  // ✅ Now p is a pointer to an array of 5 integers

    cout << (*p)[2] << endl;

    int *ptr = arr;
    cout << *ptr << endl;
    cout << ptr[2]<<endl;



    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << arr << endl;
    // cout << p << endl;
    // cout << *p << endl;


   
}