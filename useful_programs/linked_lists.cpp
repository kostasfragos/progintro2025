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

struct node {
    int info;
    node* next; // = node *next;
};

node* readListReversed() {
    node *head = nullptr, *n;
    int data;

    while (scanf("%d", &data) == 1) {
        n = new node;
        n->info = data;
        n->next = head;
        head = n;
    }

    return head;
}    

void print_info(node* p) {
    for (node* q = p; q != nullptr; q = q->next) {
        printf("%d ", q->info);
    }
    cout << endl;
    while (p != nullptr) {
        printf("%d ", p->info);
        p = p->next;
    }
}

int main() {
    print_info(readListReversed());

    stack s;
    for (int i = 0; i < 10; i++)
        s.push(i);

    while (!s.empty())
        printf("%d", s.pop());
}
