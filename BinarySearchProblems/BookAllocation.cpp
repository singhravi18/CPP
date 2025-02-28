# include <iostream>
#include <bits/stdc++.h> 
using namespace std;

bool isValid (vector <int> arr , int n , int m , int maxPagesAllowed){
    int student = 1 , pages = 0 ;

    for (int i = 0 ; i < n ; i ++){
        if (arr[i] > maxPagesAllowed){
            return false;
        }

        if (pages + arr [i] <= maxPagesAllowed){
            pages += arr[i];
        }
        else {
            student++;
            pages = arr[i];

            if (student > m){
                return false;
            }
        }
    }
    return true;
}


int allocateBooks (vector <int> &arr , int n , int m ){
    int start = *max_element(arr.begin(), arr.end()); 
    int end = accumulate (arr.begin(), arr.end() , 0);
    int ans = -1 ;

    if (m > n){
        return -1 ;
    }

    while (start <= end){
 
    int maxPagesAllowed = start + (end - start)/2;
    if (isValid (arr , n , m , maxPagesAllowed)){
        ans = maxPagesAllowed;
        end = maxPagesAllowed - 1;
    }
    else {
        start = maxPagesAllowed + 1 ;
    }
}
    return ans;
}

int main (){
    vector <int> arr = {2 , 1 , 3 , 4};
    int numberOfBooks = 4 ; // n
    int numberOfStudents = 2; // m

    int result = allocateBooks (arr , 4 , 2);
    cout << result;
}