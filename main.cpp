#include <iostream>
#include <string>
#include <sstream>

#include "stack.h"

using namespace std;

int getNum(){
    string str;
    bool foundNum = false;
    int ret = -1;
    cout << "Enter a number\n";
    do{
        getline(cin, str);
        if(isdigit(str.front())){
            stringstream(str) >> ret;
            foundNum = true;
        }else{
            cout << "That is nan. Try again\n";
        }
    }while(!foundNum);
    return ret;
}

int main()
{
    int x = 0;
    Stack s;
    do{
        x = getNum();
        while(s.peek() != -1 && s.peek() < x){
            cout << x << " squashes " << s.peek() << "\n";
            s.pop();
        }
        s.push(x);
        cout << "current stack: \n";
        s.printStack();
    }while(x != 0);
    return 0;
}
