# include <iostream>
using namespace std;

void reverseArray(int arr [] , int size){
    int start  = 0 , end = size - 1;

    while (start <= end){
        swap(arr [start] , arr [end]);
        start ++ ;
        end -- ;
       
    }
}

void printArray (int arr [] , int size){
    for (int i = 0 ; i < size ; i ++){
        cout << arr [i] << " ";
    }
    cout << endl;
}

int main (){

    int arr [6] = {2,4,6,7,9,8};
    int brr [5] = {3,4,6,7,8};

     reverseArray(arr , 6);
     reverseArray(brr , 5);

     printArray(arr , 6);
     printArray(brr , 5);


}