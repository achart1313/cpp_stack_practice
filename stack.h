#ifndef _stack
#define _stack
void helloWorld(void);

typedef struct _Node{
    int payload;
    struct _Node * next;
} Node;

class Stack{
        Node* head;
    public:
        int peek();
        int pop();
        void add(int toAdd);
};
#endif