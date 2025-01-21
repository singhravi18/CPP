# include <iostream>
using namespace std;

int main (){
    int n ;
    cout <<"Enter the value of n"<<endl;
    cin >> n;
    for (int i = 1 ; i <= n ; i ++){

        if (i == 3){
            continue;
        }
        cout << i << " ";

    }
}