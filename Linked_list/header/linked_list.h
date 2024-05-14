#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node {
public:
    int data;
    Node* next;

    Node(int data);
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList();

    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node* predecessor);
    void removeFromHead();
    void remove(int data);
    Node* retrieve(int data);
    bool search(int data);
    void traverse();
};

#endif
