#include "linked_list.h"
using namespace std;

bool LinkedList::addToHead(int data)
{
    Node *newNode = new Node;

    if(this->isEmpty())
    {
      newNode->info = data;
      newNode->next = nullptr;
      HEAD = newNode;
      TAIL = newNode;
      return true;
    }
    else
    {
        newNode->info = data;
        newNode->next = HEAD->next;
        HEAD= newNode;
        cout<<"Done"<<endl;
        return true;
    }
    return false;

   }
  


    void LinkedList:: add(Node *pred,int data)
    {

    }
   
    bool LinkedList::addToTail(int data)
    {
         Node *newNode = new Node;

         if(isEmpty())
         {
            newNode->info = data;
            newNode->next = nullptr;
            HEAD = newNode;
            TAIL = newNode;
         return true;
         }
         else 
         {
            newNode->info = data;
            newNode->next = nullptr;
            newNode->next = TAIL->next;
            TAIL->next = newNode;
            cout<<"Done"<<endl;
            return true;
         }
         return false;


    }

    bool LinkedList::remove(int data)
    {

    }
    bool LinkedList::removeFromHead(int &data)
    {

    }
    bool LinkedList::removeFromTail(int &data)
    {

    }


