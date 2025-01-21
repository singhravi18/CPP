# include <iostream>
using namespace std;

int main (){
    int num = 1;

    switch (num){
        case 1 : cout <<"First" <<endl;
        break;

        case 2 : cout <<"Second" <<endl;
        break;

        default : cout <<"No cases matched"<<endl;


        // so num = 1 ,here 1 is matched with the case i.e. case 1 has 1 so the num value and case is matched .

    }
}