#include <iostream>

using namespace std;
class Node
{  public:

    int data;
    Node *next;

    Node(int value){
     data = value;
     next = NULL;
     }
};

class LinkedList
{
    Node *head;
  public:
    LinkedList()
    {
        head = NULL;
    }

    void insertbeginning(int value)
    {

        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;

    }

    void display()
    {
        Node *temp= head;
        while(temp != NULL)
    {
         cout<<temp->data<<"->";
         temp = temp->next;

        }
     cout<<"NULL";
    }
};
int main()
{
  LinkedList l;
  l.insertbeginning(30);
  l.insertbeginning(20);
    l.insertbeginning(20);
      l.insertbeginning(60);

  l.display();
    return 0;
}
