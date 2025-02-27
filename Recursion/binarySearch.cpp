# include <iostream>
using namespace std;

bool binarySearch (int arr [] , int s , int e , int key){

    int mid = s + (e - s)/2;
    // base case for element not found
        if (s > e){
            return false;
        }
    // base case for element found
    if (arr[mid] == key){
        return true;
    }
   

     if (arr[mid] < key) {

        return binarySearch (arr , mid + 1 , e , key);
    }
    else {
        return binarySearch (arr , s , mid - 1 , key );
    }

}

int main (){
    int size = 7;
    int arr[7] = {1 , 22 , 24 , 27 , 45 , 56 , 76};
    int key = 27;

    if (binarySearch(arr , 0 , size - 1 , key)){
        cout << "true";
    }
    else {
        cout << "False";
    }
}