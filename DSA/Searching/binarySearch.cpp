# include <iostream>
using namespace std;

int binarySearch (int arr [] , int size , int key){
    int start = 0;
    int end = size - 1;
    
    int mid = (start + (end - start)/2);
    
    while (start <= end){
    
    if (key == arr[mid]){
        return mid;
    }
    else if (key > arr [mid]){
        start = mid + 1;
    }
    else if (key < arr [mid]){
        end = mid - 1;
    }
    mid = (start + (end - start)/2);
}
return -1;
}

int main (){
    int arr [8] = {3,5,7,9,11,13,14,17};
    
    int index = binarySearch (arr , 8 , 17);
    
    if (index != -1)
 {
        cout << "Elemnet is found at index:" <<index << endl;
    }
    else{
        cout << "Element is not found";
    }
    
    
}