# include <iostream>
using namespace std;

bool IsEven(int num){
    if(num & 1){
        return 0;
    }
    return 1;
}

int main (){

    int a ;
    cin >> a;


    int ans = IsEven(a);

    cout << ans;

    // if (IsEven (a)){
    //     cout << "The number is even";
    // }
    // else{
    // cout <<"The numnber is odd";
    // }

}