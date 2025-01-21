# include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main (){

   pair <int , int >p = {2 , 3};

   cout <<p.first << " " << p .second <<endl ;//2 and 3 will be printed respectively


   pair <int , pair <int , int >>r = {1 , {2 , 3}};

   cout << r.first <<" " << r.second.first <<" " << r.second.second <<endl;// 1 , 2, 3 will be printed respectively


   pair <int , int > arr[] = {{1,2},{4,5},{8,9}};

   cout << arr[1].second <<endl; //4 ,5 are present at 1 index and sincce we are accessing the second element 5 will be printed.



}