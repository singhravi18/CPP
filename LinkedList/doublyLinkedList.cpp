#include <iostream>
using namespace std;

class Node
{
public:
  Node *previous;
  Node *next;
  int data;

  Node(int value)
  {
    this->data = value;
    this->previous = NULL;
    this->next = NULL;
  }
};

int getLength(Node *head)
{
  int len = 0;
  Node *temp = head;

  while (temp != NULL)
  {
    len++;
    temp = temp->next;
  }

  return len;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{
  if (head == NULL)
  {
    Node *temp = new Node(d);
    head = temp;
    tail = temp;
  }
  else
  {
    Node *temp = new Node(d);
    temp->next = head;
    head->previous = temp;
    head = temp;
  }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
  if (tail == NULL)
  {
    Node *temp = new Node(d);
    tail = temp;
    head = temp;
  }
  else
  {
    Node *temp = new Node(d);
    tail->next = temp;
    temp->previous = tail;
    tail = temp;
  }
}

void insertAtPosition (Node* &head , Node* &tail , int position , int d){
   if(position == 1) {
        insertAtHead(tail,head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> previous = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> previous = temp;

}

void deleteNode(int position, Node *&head)
{

  if (head == NULL)
  {
    cout << "List is empty" << endl;
    return;
  }

  // deleting first or start node
  if (position == 1)
  {
    Node *temp = head;
    temp->next->previous = NULL;
    head = temp->next;
    temp->next = NULL;
    delete temp;
  }
  else
  {
    // deleting any middle node or last node
    Node *curr = head;
    Node *previous = NULL;

    int cnt = 1;
    while (cnt < position)
    {
      previous = curr;
      curr = curr->next;
      cnt++;
    }

    curr->previous = NULL;
    previous->next = curr->next;
    curr->next = NULL;

    delete curr;
  }
}

void print(Node *&head)
{
  Node *temp = head;

  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{

  Node *node1 = new Node(10);

  Node *head = node1;
  Node *tail = node1;

  insertAtHead(head, tail, 12);
  print(head);

  insertAtHead(head, tail, 15);
  print(head);

  insertAtHead(head, tail, 17);
  print(head);

  insertAtTail (tail , head , 18);
  print (head);

  insertAtPosition (head , tail , 3 , 35);
  print (head);

  deleteNode (3 , head);
  print (head);
}