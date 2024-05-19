#include "linked_list.h"
//#include <iostream>

Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

SinglyLinkedList::SinglyLinkedList() {
    head = nullptr;
}

bool SinglyLinkedList::isEmpty() {
    return head == nullptr;
}

void SinglyLinkedList::addToHead(int data) {
    Node* new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}

void SinglyLinkedList::addToTail(int data) {
    Node* new_node = new Node(data);
    if (isEmpty()) {
        head = new_node;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new_node;
    }
}

void SinglyLinkedList::add(int data, Node* predecessor) {
    if (predecessor == nullptr) {
        std::cout << "Predecessor node is not found" << std::endl;
        return;
    }
    Node* new_node = new Node(data);
    new_node->next = predecessor->next;
    predecessor->next = new_node;
}

void SinglyLinkedList::removeFromHead() {
    if (isEmpty()) {
        std::cout << "List is empty, nothing to remove" << std::endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void SinglyLinkedList::remove(int data) {
    if (isEmpty()) {
        std::cout << "List is empty, nothing to remove" << std::endl;
        return;
    }
    if (head->data == data) {
        removeFromHead();
        return;
    }
    Node* current = head;
    while (current->next != nullptr) {
        if (current->next->data == data) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            return;
        }
        current = current->next;
    }
    std::cout << "Data not found in the list" << std::endl;
}

Node* SinglyLinkedList::retrieve(int data) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == data) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

bool SinglyLinkedList::search(int data) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == data) {
            return true;
        }
        current = current->next;
    }
    return false;
}

void SinglyLinkedList::traverse() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
