# include <iostream>
using namespace std;

void insertion (int arr[] , int n){
    for (int i = 1 ; i < n ; i ++){
        int temp = arr[i];
        
        int j = i - 1 ;

        for (; j >= 0 ; j --){

            if (arr[j] > temp){
                arr[j + 1] = arr [j];
            }
            else{
                break;
            }

        }
        arr[j + 1] = temp;
    }
}

int main (){

    int arr [7] = {56 , 45 , 34, 5 , 67 , 2 , 89};

    for (int j = 0 ; j < 7 ; j ++){
        cout << arr[j] <<" ";
    }

    cout << endl;

    insertion (arr , 7);

    cout << "The sorted array is " << endl;

    for (int i = 0 ; i < 7 ; i ++){
        cout << arr [i] << " ";
    }

}