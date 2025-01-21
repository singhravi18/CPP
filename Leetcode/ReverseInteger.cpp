# include <iostream>
using namespace std ;

int main (){
    int n ;
    cin >> n ;
    int ans = 0;

    while (n != 0){
        int digit = n % 10;
        /* if ((ans > INT8_MAX/10) || ans < INT8_MIN/10){    if after reversing number comes greater or less than integer boundary
            cout << "Out of range"<<endl;
        } */
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << ans;
    
}