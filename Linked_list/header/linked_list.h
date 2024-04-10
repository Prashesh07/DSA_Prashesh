#pragma once 
#include <iostream>
class Node 
{
  public:
  int info;
  Node * next;

  Node (){}
  Node (int d) : info(d), next(NULL) {}
  Node(int d,Node *next ): info(d),next(next) {}
};

class LinkedList 
{
    private:
    Node* HEAD;
    Node* TAIL;

    public:
    LinkedList();
    ~LinkedList();

    void add(Node *pred,int data);
    bool addToHead(int data);
    bool addToTail(int data);

    bool remove(int data);
    bool removeFromHead(int &data);
    bool removeFromTail(int &data);
    
    bool isEmpty();
};
