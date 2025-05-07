#include <iostream>

#include "stack.h"

using namespace std;

void helloWorld(void){
    cout << "helloWorld\n";
}

Stack::Stack(){
    cout << "constructing stack item\n";
    head = NULL;
}

Stack::~Stack(){
    Node* n;
    cout << "destructing stack item\n";
    while(head != NULL){
        n = head;
        head = head->next;
        delete(n);
    }
    return;
}

int Stack::peek(){
    if(head == NULL){
        return -1;
    }else{
        return head->payload;
    }
}

int Stack::pop(){
    if(head == NULL){
        return -1;
    }
    Node* n = head;
    head = n->next;
    int ret = n->payload;
    delete n;
    return ret;
}

void Stack::add(int toAdd){
    Node* n = new Node;
    n->next = head;
    n->payload = toAdd;
    head = n;
    return;
}