# include <iostream>
using namespace std;

int main (){
//     int i = 2 , n ;
//     cin >> n ; 
//     while (i < n){
//         if (n % i == 0){
//             cout << "Not Prime"<< endl;
//         }
//         else{
//             cout << "Prime"<<endl;
//         }
//         i = i + 1;
//     }

int i = 2 , n ;
cin >> n;

for (i= 2; i < n ; i ++){
    if (n % i == 0){
        cout <<"Not Prime"<<endl;
    }
    else{
        cout <<"Prime"<<endl;
    }
}
}