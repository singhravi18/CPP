# include <iostream>
using namespace std;

void findDestination (int src , int dest){
    

    cout << "source" << src << " " << "destination" << dest << endl;
    // base case
    
    if (src == dest){
        return ;
    }

    src ++ ; // preprocessing

    findDestination (src , dest);

}

int main (){

    int src = 0 ;
    int dest = 10 ;

    cout << endl;

    findDestination (src , dest);

    



}