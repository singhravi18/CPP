# include <iostream>
using namespace std;

bool isSorted (int arr[] , int size){
    if (size == 0 || size == 1){
        return true;
    }

    if (arr[0] > arr[1]){
        return false;
    }
    else {
           return isSorted (arr + 1 , size - 1);
    }


}

int main (){

    int arr1 [7] = { 3 , 5 , 6 , 7 , 8 , 9 , 10};
    int arr2 [7] = { 3 , 5 , 6 , 67 , 45 , 11 , 10};

    int ans = isSorted (arr1 , 7);
    cout << ans << endl;

    
    int ans2 =  isSorted (arr2 , 7);
    cout << ans2;  
 


}