# include <iostream>
using namespace std;

class Node {
     public:

    int data ;
    Node* next ;

    Node (int value) {
        this -> data = value;
        this -> next = NULL;
    }
};

    void insertAtHead (Node* &Head , int data){

        Node* temp = new Node (data);
        temp -> next = Head;
        Head = temp;



    }

    void print(Node* &Head){
        Node* temp = Head;

        while (temp != NULL){
            cout << temp -> data << " ";
            temp =  temp -> next;
        }
    }



int main (){

    Node* node1 = new Node(10);

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* Head = node1;
    print (Head) ;

    cout << endl;

    insertAtHead (Head , 12);
    print (Head);


}