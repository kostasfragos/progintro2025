#include <iostream>
using namespace std;

class queue {
public:
    queue();               // constructor: creates an empty queue
    bool empty();          // checks whether the queue is empty or not
    void enqueue(int x);   // inserts one element to the queue
    int dequeue();         // removes an element from a non-empty queue
    int peek();            // returns (without removing) the first element of a non-empty queue

private:
    struct node {
        int info;
        node *next;
    };
    node *front, *rear;
};

queue::queue() {
    front = rear = nullptr;
}

bool queue::empty() {
    return front == nullptr; // or return rear == nullptr;
}

void queue::enqueue(int x) {
    node *p = new node;
    p->info = x;
    p->next = nullptr;
    if (front == nullptr) 
        front = p;
    else rear->next = p;
    rear = p;
}

int queue::dequeue() {
    node *p = front;
    int result = front->info;
    if (front == rear)
        rear = nullptr;
    front = front->next;
    delete p;
    return result;
}

int queue::peek() {
    return front->info;
}

int main() {
    queue pos, neg; // Two queues: one for positive numbers, one for negative numbers (absolute values)
    int x;

    // Read all numbers from input until EOF
    while (scanf("%d", &x) == 1) {
        if (x == 0) break;

        if (x > 0) {
            pos.enqueue(x);   // Store positive numbers in 'pos' queue
        } else { // if x < 0
            neg.enqueue(-x);  // Store absolute value of negative numbers in 'neg' queue
        }
    }

    // Compare the two queues element by element
    bool ok = true;
    while (!pos.empty() && !neg.empty()) {
        if (pos.dequeue() != neg.dequeue()) { // Check if corresponding values match
            ok = false;
            break;
        }
    }

    // If any queue still has elements, the counts are different which is not valid
    if (!pos.empty() || !neg.empty())
        ok = false;

    // Output the result
    if (ok)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}