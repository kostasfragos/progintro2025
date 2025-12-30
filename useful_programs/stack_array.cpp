#include <iostream>
using namespace std;

class stack {
public:  
    stack();
    bool empty();
    void push(char x); // int x
    int pop();
    
private:
    static const int size = 100;
    // or: #define size (int)(100)
    char data[size]; // int data[size];
    int top;
};

stack::stack() {
    top = 0;
}

bool stack::empty() {
    return top == 0;
}

void stack::push(char x) { // int x
    data[top++] = x;
}

int stack::pop() {
    return data[--top];
}

int main() {
    stack s;
    // for (int i = 1; i <= 10; i++)
    //     s.push(i);
    int c;
    while ((c = getchar()) != EOF) {
        s.push(c);
    }

    while (!s.empty())
        printf("%c\n", s.pop());
}