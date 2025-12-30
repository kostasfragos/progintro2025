#include <iostream>
using namespace std;

class stack {
public:  
    stack();
    bool empty();
    void push(int x);
    int pop();
    
private:
    struct node {
        int info;
        node *next;
    };
    node *head;
};

stack::stack() {
    head = nullptr;
}

bool stack::empty() {
    return head == nullptr;
}

void stack::push(int x) {
    node *p = new node;
    p->info = x;
    p->next = head;
    head = p;
}

int stack::pop() {
    node *p = head;
    int result = head->info;
    head = head->next;
    delete p;
    return result;
}

int main() {
    stack s;

    for (int i = 1; i <= 10; i++)
        s.push(i);

    while (!s.empty())
        printf("%d\n", s.pop());
}