# include <iostream>
using namespace std;

int main (){
    int amount ;

    cout <<"Enter the amount"<<endl;
    cin >> amount;

    int note_100 = 0;
    int note_50 = 0;
    int note_20 = 0;
    int note_1 = 0;

    switch (1){
        case 1:note_100 = amount / 100;
               amount = amount % 100;
               cout << "The number of 100 rupees note is" <<  note_100 <<endl;

        case 2:note_50 = amount / 50;
               amount = amount % 50;
               cout << "The number of 50 rupees note is" << note_50 <<endl;   

        case 3:note_20 = amount / 20;
               amount = amount % 20;
               cout << "The number of 20 rupees note is" << note_20 <<endl;   

        case 4:note_1 = amount / 1;
               amount = amount % 1;
               cout << "The number of 1 rupees note is" << note_1 <<endl;      
    }
    
}