#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = Null;
    }
};

class Linkedlist
{
   Node = head;

   Linkedlist()
   {
       head = Null;
   }

   void insertBeginning(int value)
   {
       Node *newNode = new Node(value);

       newNode->next= head;
       head = newNode;
   }
};




int main()
{  linkedlist l1;
ls.insertbeginning(10);
    return 0;
}
