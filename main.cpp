#include <iostream>
#include <string>
#include <sstream>

#include "stack.h"

using namespace std;

int main()
{
    helloWorld();
    int x = 0;
    string str;
    Stack s;
    cout << "peek:" << s.peek() << "\n";
    s.add(5);
    cout << "peek:" << s.peek() << "\n";
    s.pop();
    cout << "peek:" << s.peek() << "\n";
    cout << "enter a number\n";
    getline(cin, str);
    if(isdigit(str.front())){
        stringstream(str) >> x;
        cout << "number + 1 is: " << x + 1 << "\n";
    }else{
        cout << "that is nan\n";
    }
    return 0;
}