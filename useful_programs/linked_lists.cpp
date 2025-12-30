#include <iostream>
using namespace std;

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
    // cout << endl;
    // while (p != nullptr) {
    //     printf("%d ", p->info);
    //     p = p->next;
    // }
}

int main() {
    print_info(readListReversed());
}
