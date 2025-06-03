# include <iostream>
using namespace std;

int getLength (char name []){
    int count  = 0 ;
    for (int i = 0 ; name[i] != 0 ; i ++){
        count ++ ;
    }
    return count ;
}

int  main (){

    char ch[10] ;

    cout << "Enter your name" << endl;
    cin >> ch ;
    //ch[2] = '\0'; // putting null character on index 2 

    cout << "Your name is " << ch << endl;

    cout << "The length of the string is " << getLength(ch);

}