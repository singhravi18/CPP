#include <iostream>
using namespace std;

void reverse (char name[] , int n){
    int start = 0 ;
    int end = n - 1;

    while (start < end){
        swap(name[start ++] , name [end --]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name [20];
    cout << "Enter the name"<<endl;
    cin >> name;

    cout <<"The name is "<<name <<endl;
    int store = getLength(name);

    cout <<"The length is " << store <<endl;

     reverse(name , store);
     cout << "Your reversed name is"<<endl;
     cout << name;
}