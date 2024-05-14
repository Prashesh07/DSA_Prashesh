#include <iostream>
#include "linked_list.h"

int main() {
    SinglyLinkedList my_list;

   
    my_list.addToHead(3);
    my_list.addToHead(2);
    my_list.addToHead(1);
    my_list.addToTail(4);
    my_list.addToTail(5);

    
    std::cout << "Initial list:" << std::endl;
    my_list.traverse(); 

    
    my_list.removeFromHead();
    my_list.remove(3);

    
    std::cout << "Modified list:" << std::endl;
    my_list.traverse();  

    
    std::cout << "Is 4 in the list? " << std::boolalpha << my_list.search(4) << std::endl;  

   
    Node* node_ptr = my_list.retrieve(2);
    std::cout << "Node pointer: " << node_ptr << std::endl;

    return 0;
}