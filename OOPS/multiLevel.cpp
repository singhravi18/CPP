# include <iostream>
using namespace std;

class Animal {

    public:
    int age ;
    int weight;

    void speak (){
        cout << "Speaking" << endl;
    }

};

class Dog : public Animal{

};

class GermanShepherd : public Dog {

};


int main (){
    GermanShepherd d1; // the members of Animal class can also be accessed by class 
                       //GermanShepherd even if GermanShepherd is not inheriting Animal class directly.  
                       //MultiLevel inheritence is happening here.
    d1.speak ();

    cout << d1.age << endl;

}