# include <iostream>
using namespace std;

void print (int *p){
    *p = *p + 1;
    cout << *p << endl;

}

int main (){
    int a = 5 ;

    int *p = &a ;
    cout << a << endl;
    print (p);

    cout << a << endl;
}