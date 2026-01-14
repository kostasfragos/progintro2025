#include <iostream>
using namespace std;

class list {
public:
    list();                   // constructor: creates an empty list
    bool empty();             // checks whether the list is empty or not
    int size();               // returns the length of the list
    void add(int k, int x);   // inserts element x at position k of the list
    int get(int k);           // returns the value of the element at position k of the list
    void remove(int k);       // removes the element at position k of the list
    int searchMF(int x);

private:
    struct node {
        int info;
        node *next;
    };
    node *head;
    int n;
};

list::list() {
    head = nullptr;
    n = 0;
}

bool list::empty() {
    return n == 0;
}

int list::size() {
    return n;
}

void list::add(int k, int x) {
    node *p = new node;
    p->info = x;

    if (k == 1) {
        p->next = head;
        head = p;
    } else {
        node *curr = head;
        for (int i = 1; i < k - 1; i++) {
            curr = curr->next;
        }
        p->next = curr->next;
        curr->next = p;
    }
    n++;
}

int list::get(int k) {
    node *curr = head;
    for (int i = 1; i < k; i++) {
        curr = curr->next;
    }
    return curr->info;
}

void list::remove(int k) {
    node *temp;

    if (k == 1) {
        temp = head;
        head = head->next;
    } else {
        node *curr = head;
        for (int i = 1; i < k - 1; i++) {
            curr = curr->next;
        }
        temp = curr->next;
        curr->next = temp->next;
    }

    delete temp;
    n--;
}

int list::searchMF(int x) {
    node *curr = head;
    node *prev = nullptr;
    int pos = 1;

    while (curr != nullptr) {
        if (curr->info == x) {
            if (prev != nullptr) {
                prev->next = curr->next;
                curr->next = head;
                head = curr;
            }
            return pos;
        }
        prev = curr;
        curr = curr->next;
        pos++;
    }
    
    return 0;
}

int main() {
    list L;
    int N, M;
    int K, X;
    int sum = 0;

    // Read number of insertions
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> K >> X;
        L.add(K, X);
    }

    // Read number of searches
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> X;
        sum += L.searchMF(X);
    }

    // Print result
    cout << sum << endl;
    
    return 0;
}