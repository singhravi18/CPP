# include <iostream>
using namespace std;

int search (int arr [] , int size , int key){
    for (int i = 0 ; i < size ; i ++){
        if (arr [i] == key){
            return i;
        }
    }
    return 0;
}

int main (){
    int arr [7] = {4,56,76,34,24,78};
    int key ;
    cout <<"Enter the key to search"<<endl;
    cin >> key;
    
    int index = search (arr , 7 , key);
    
    if (index){
        cout <<"Element is found and the index is "<<index<<endl;
    }
    else {
        cout <<"Element is not found"<<endl;
    }
}