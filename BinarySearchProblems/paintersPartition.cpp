# include <iostream>
# include <bits/stdc++.h>
using namespace std;

bool isValid (vector<int> arr , int board , int painter , int maxAllowedTime){
    int labour = 1 , time = 0 ;

    for (int i = 0 ; i < board ; i ++){
        if (arr[i] > maxAllowedTime){
            return false;
        }

        if (time + arr[i] <= maxAllowedTime){
            time += arr[i]; 
        }

        else {
            labour ++;
            time = arr[i];

            if (labour > painter){
                return false;
            }
        }
    }
    return true;
}

int allocateBoard (vector <int> arr , int board , int painter){
    if (painter > board){
        return -1 ;
    }

    int start = *max_element (arr.begin() , arr.end());
    int end = accumulate(arr.begin() , arr.end() , 0);
    int ans = -1;
    while (start <= end){

    int maxAllowedTime = start + (end - start)/2;
    

    if (isValid(arr , board , painter , maxAllowedTime)){
        ans = maxAllowedTime;
        end = maxAllowedTime - 1;
    }
    else {
        start = maxAllowedTime + 1;
    }
}
    return ans ;
}

int main (){
    vector <int> arr = {2 , 4 , 5 , 7};
    int board = 4;
    int painter = 2;

    int result = allocateBoard (arr , 4 , 2);
    cout << result;
}

