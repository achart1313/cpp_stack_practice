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

void Stack::push(int toPush){
    Node* n = new Node;
    n->next = head;
    n->payload = toPush;
    head = n;
    return;
}

//an iterator might be more professional than this cheap method
//but it should work for this small program
void Stack::printStack(){
    Node* n = head;
    while(n != NULL){
        cout << n->payload << "\n";
        n = n->next;
    }
}