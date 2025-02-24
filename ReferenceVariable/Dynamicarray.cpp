# include <iostream>
using namespace std;

int getSum (int *arr , int n ){    // The array can also be passed like this (int arr[])
    int sum = 0 ;
    for (int i = 0 ; i < n ; i ++){
        sum = sum + arr[i] ;
    }
    return sum;
}
int main (){

    int n ;
    cin >> n ;

    int *arr = new int [n];

    for (int i = 0 ; i < n ; i ++){
        cin >> arr[i];
    }

    int ans = getSum (arr , n);

    cout << "the answer is " << ans << endl;

    delete [] arr;

}