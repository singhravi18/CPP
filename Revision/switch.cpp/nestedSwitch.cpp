# include <iostream>
using namespace std;

int main (){
    int num = 1;
    char ch = '1';


    switch (num){
        case 1: cout <<"First" <<endl;

          switch (ch){

            case '1':cout <<"Inside nested switch"<<endl;
            break;
        }

        break;


      
        case 2: cout <<"Second" <<endl;
        break;
    }
}