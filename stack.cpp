#include <iostream>

#include "stack.h"

using namespace std;

void helloWorld(void){
    cout << "helloWorld\n";
}

int Stack::peek(){
    cout << "dummy Stack peek\n";
    return 1;
}

int Stack::pop(){
    cout << "dummy Stack pop\n";
    return 1;
}

void Stack::add(int toAdd){
    cout << "dummy Stack add " << toAdd << "\n";
    return;
}