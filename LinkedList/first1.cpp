# include <iostream>
using namespace std;

class Node {
    
    public:
    int data;
    Node* next;

    Node (int value){
        this -> data = value;
        this -> next = NULL;
    }

    ~Node()
    {

        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertAtHead ( Node* &head , Node* &tail , int d){

    if (head == NULL){
        Node* temp = new Node (d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node (d);
    temp -> next = head;
    head = temp;
    }
    
}

void insertAtTail (Node* &head , Node* &tail , int d){
     if (head == NULL){
        Node* temp = new Node (d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node (d);
    tail -> next = temp ;
    tail = temp;
    }
}

void insertAtPosition (Node* &head , Node* &tail , int position , int data){

    if (position == 1){
        insertAtHead (head , tail , data);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    if (temp -> next == NULL){
        insertAtTail(head , tail , data);
        return;
    }

    Node* nodeToInsert = new Node (data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}
void deleteNode (int position , Node* &head){
    if (position == 1){

        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;

    }
    else {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }

  
}

void print (Node* &head){
    Node* temp = head;

    while (temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next ;
    }
    cout << endl ;

}

int main (){

    Node* node1 = new Node (12);

    Node* head = node1;
    Node* tail = node1;
    print (head);

    insertAtTail( head , tail , 10);
    print (head);

    insertAtTail(head , tail , 15);
    print (head);

    insertAtPosition (head , tail , 3 , 22);
    print (head);

    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;

    deleteNode (1 , head);
    print (head);



}