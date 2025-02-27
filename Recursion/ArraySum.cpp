# include <iostream>
using namespace std ;

int getSum (int arr [] , int size){
    
    if (size == 0){
        return 0 ;
    }
    if (size == 1){
        return arr[0];
    }
    int ans = arr[0] + getSum (arr + 1 , size - 1);
    return ans;
}

int main (){
    int size = 7 ;
    int arr [7] = {1 ,2 , 3 , 4, 5, 6, 8};

    int result = getSum (arr , 7);
    cout << result;


}