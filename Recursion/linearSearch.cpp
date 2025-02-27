# include <iostream>
using namespace std;

bool  linearSearch(int arr [] ,int size , int key){
    if (size == 0){
        return false;
    }

    if (arr[0] == key){
        return true;
    }
    else {
        bool remainingPart = linearSearch(arr + 1 ,size - 1 ,  key);
        return remainingPart;
    }


}

int main (){
    int size = 7 ;
    int arr[7] = {2 ,3 , 5, 7 , 9 , 45 , 34};
    int key = 87;

    if (linearSearch (arr ,size , key)){
        cout << "true";
    }
    else {
        cout << "false";
    }
}