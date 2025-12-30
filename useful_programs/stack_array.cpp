#include <iostream>
using namespace std;

class stack {
public:  
    stack();
    bool empty();
    void push(int x);
    int pop();
    
private:
    static const int size = 100;
    // or: #define size (int)(100)
    int data[size];
    int top;
};

stack::stack() {
    top = 0;
}

bool stack::empty() {
    return top == 0;
}

void stack::push(int x) {
    data[top++] = x;
}

int stack::pop() {
    return data[--top];
}

int main() {
    stack s;
    for (int i = 1; i <= 10; i++)
        s.push(i);

    while (!s.empty())
        printf("%d\n", s.pop());
}