# include <iostream>
# include <string.h>
using namespace std;
class Ravi {
    
    int health;

    public:
    char level;
    char *name;

    static int timeToComplete; // static data member.......belongs to class not object

// static function can be accessed without the creation of object and it does not have this 
//pointer because this pointer points to the current object but static function requires no object
    static int random (){
        // cout << level << endl;  ......... cannot access data member other than static data member.

     return timeToComplete; // this is static data member.
    }

    // parameterized constructor

    Ravi (int health){
       cout << "The address is " << this <<endl;
       this -> health = health; // This pointer....hold the memory address of current object.
    }
     Ravi (int health , char level){
       cout << "The address is " << this <<endl;
       this -> health = health; // This pointer....hold the memory address of current object.
       this -> level = level;
    }

//  This is explicitly created constructor. The Default constructor made by system 
//  will be destroyed automatically.
    Ravi (){
        cout <<" Simple Constructor is called" << endl;
        name = new char [100];
    }

// copy constructor
    Ravi (Ravi& temp){ // pass by reference because temp will create copy of r and temp will call copy 
        //constructor and copy constructor will try to take temp and then temp will again call copy 
        //constructor and hence get stucked in infinite loop

     char *ch = new char [strlen(temp.name) + 1];
     strcpy (ch , temp.name);
     this -> name = ch ;   
     cout << "Copy consturctor called"<< endl;
     this -> health = temp.health;
     this -> level = temp.level;
    }

    void print (){
        cout << name << endl;
        cout << health << endl;
        cout << level << endl;
    }

    int gethealth (){
        return health;
    }

    char getlevel (){
        return level;
    }

    void sethealth (int h){
        health = h ;
    }
    void setlevel (char l){
        level = l ;
    }

    void setName (char name[]){
        strcpy(this -> name, name);
    }

    ~Ravi (){
        cout << "Destructor called" << endl;
    }


};

int Ravi :: timeToComplete = 10; // initialising static data member

int main () {

cout << Ravi :: random();






    // cout << Ravi :: timeToComplete << endl; // accessible without object

    // Ravi a;
    // cout << a.timeToComplete << endl; // can also be accessed by object but it is not recommended

    














    // Ravi a ; // in static allocation destructor is called automatically

    // Ravi *b = new Ravi;// in dynamic allocation destructor is called manually
    // delete b ;



















    // Ravi ravi1 ;
    // ravi1.sethealth(12);
    // ravi1.setlevel('B');

    // char name [7] = "Ravi";
    // ravi1.setName(name);

    // //ravi1.print ();

    // Ravi ravi2 (ravi1);

    // //ravi2.print ();

    // ravi1.name [0] = 'K';

    // ravi1.print ();

    // ravi2.print (); // Here also Kavi will be printed because default copy constructor is 
    //                 //created and default copy constructor does the shallow copy i.e. same memory is accessed
    //                 //the same memory at specified address is accessed as name is a pointer and it contains 
    //                 //the address.

    // ravi1 = ravi2 ; // copy assignment operator

    // ravi1.print();
    // ravi2.print();














// Ravi r (70 ,'c') ;
// r.print ();

// Ravi a (r); // Copy Constructor
// a.print ();


















// //cout << "Hi" << endl;
// Ravi ra (10);
// cout << "The address of ra is :" << &ra <<endl;
// //cout << "Hello" << endl;
// ra.print ();

// Ravi *r = new Ravi ;
// r -> print ();

// Ravi temp (11 , 'G');
// temp . print();


















// // Static Alloaction.
//     Ravi r;

//     r.sethealth(70);
//     r.setlevel('A');

//     cout <<"The level is " << r.level << endl;
//     cout <<"The health is " << r.gethealth() << endl;


// // Dynamic Allocation

//     Ravi *a = new Ravi;

//     a -> sethealth (80); // why not *(a).sethealth ();
//     a -> setlevel ('B');
    
//     cout <<"The level is " << (*a).level << endl;
//     cout <<"The health is " << (*a).gethealth() << endl;

// // Accessing without dot operator by using arrow

//     cout <<"The level is " << a -> level << endl;
//     cout <<"The health is " << a -> gethealth() << endl;






















    // Ravi r1;

    // cout <<"The size of r1 is :" << sizeof(r1) << endl;    // what is padding

    // cout <<"The health of r1 is :"<<r1.gethealth() << endl;

    // r1.sethealth(70);

    // // r1.health = 70 ;
    // r1.level = 'A';
    

    // cout << "The health is :" << r1.gethealth() << endl;
    // cout << "The level is :" << r1.level << endl;
    
    // // r1.print();
    


}