#include <iostream>
using namespace std;
int main (){
    int arr[5];
 
    int sum = 0;
    cout <<"Enter the values to be added"<<endl;
  

    for (int i = 0 ; i < 5 ; i ++){
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "The sum is "<<sum<< endl;

}