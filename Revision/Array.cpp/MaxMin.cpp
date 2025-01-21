# include <iostream>
using namespace std;

int getMax (int arr [] , int size){
    int max = INT32_MIN;

    for (int i = 0 ; i < size ; i ++){
        if (arr[i] > max){
            max = arr [i];
        }
    }
    return max;
}
int getMin (int arr [] , int size){
    int min = INT32_MAX;

    for (int i = 0 ; i < size ; i ++){
        if (arr[i] < min){
            min = arr [i];
        }
    }
    return min;
}

int main (){

    int size ;
    cin >> size;

    int arr [100];

    //Taking the input

    for (int i = 0 ; i < size ; i ++){
        cin >> arr [i];
    }


    cout <<"Maximum NUmber In The Array Is" << getMax ( arr  ,  size) <<endl;
    cout <<"Minimum NUmber In The Array Is" << getMin ( arr  ,  size) <<endl;


}