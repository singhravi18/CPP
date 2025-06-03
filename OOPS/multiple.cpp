# include <iostream>
using namespace std;

class Animal {

    public:
    int age ;
    int weight;

    void bark (){
        cout << "Barking" << endl;
    }

};

class Human {
    public :
    void speak (){
        cout << "speaking" << endl;
    }

};

class Hybrid : public Animal , public Human {

};


int main (){
    Hybrid d1; 
    d1.bark ();
    d1.speak ();

    cout << d1.age << endl;

}