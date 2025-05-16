#ifndef _stack
#define _stack
void helloWorld(void);

//stack currently can hold only integers
//if I get around to it I'll probably update it to hold generic data
typedef struct _Node{
    int payload;
    struct _Node * next;
} Node;

class Stack{
        Node* head;
    public:
        Stack();
        ~Stack();
        int peek();
        int pop();
        void push(int toPush);
        void printStack();
};
#endif