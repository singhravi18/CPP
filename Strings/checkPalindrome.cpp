# include <iostream>
using namespace std;

char toLower (char name){
    if (name >= 'a' && name <= 'z'){
        return name ;
    }
    else {
        char temp = name - 'A' + 'a'; 
        return temp ;
    }
}

bool isPalindrome (char name[] , int n){
    int s = 0 , e = n - 1;

    while (s <= e){
       // if (name[s] != name[e]){ // this will deal with case sensitive letters

       if(toLower (name[s]) != toLower (name[e])){  // deal with case insensitive letters
            return 0;
        }
        else {
            s ++;
            e --;
        }
    }
    return 1;
}

void reverse (char name[] , int n){
    int s = 0 ; 
    int e = n - 1;

    while (s < e){
        swap(name[s++] , name[e--]);
    }
}

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

    int len  = getLength(ch);
    cout << "The length of the string is " << len << endl;

    // reverse (ch , len);
    // cout << "Your name is " << ch << endl;

    if (isPalindrome (ch , len)){
        cout << "Yes" << endl;
    }
    else {
          cout << "No" << endl;
    }


}