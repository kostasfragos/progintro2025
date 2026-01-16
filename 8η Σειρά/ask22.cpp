#include <iostream>
using namespace std;

class bstree {
public:
    bstree();             // constructor: creates an empty binary search tree (BST)
    int height();         // returns the tree's height (an empty tree has height = 0)
    void insert(int x);   // inserts the number x in the tree
    int search(int x);    // searches for the number x in the tree and returns the level it is in
                          // (the root belongs at level 1) or returns 0 if x doesn't exist in the tree  
    int min();            // returns the minimum element of the tree
    int max();            // returns the maximum element of the tree
    void inorder();       // prints the elements of the tree in in-order traversal
    void preorder();      // prints the elements of the tree in pre-order traversal
    void postorder();     // prints the elements of the tree in post-order traversal

private:
    struct node {
        int info;
        node *left, *right;
    };
    node *root;

    int height_aux(node *t);
    node *insert_aux(node *t, int key);
    int search_aux(node *t, int key, int level);
    void inorder_aux(node *t);
    void preorder_aux(node *t);
    void postorder_aux(node *t);
};

// ------------ Auxiliary Function Implementations ------------

int bstree::height_aux(node *t) {
    if (t == nullptr) return 0;
    return 1 + std::max(height_aux(t->left), height_aux(t->right));
}

bstree::node *bstree::insert_aux(node *t, int key) {   // this function returns the updated tree
    if (t == nullptr) {                                // after the 'key' element has been inserted
        node *p = new node;
        p->info = key;
        p->left = p->right = nullptr;
        return p;
    }
    if (key < t->info) t->left = insert_aux(t->left, key);
    else t->right = insert_aux(t->right, key);
    return t;
}

int bstree::search_aux(node *t, int key, int level) {
    if (t == nullptr) return 0;
    if (t->info == key) return level;
    if (key < t->info) return search_aux(t->left, key, level+1);
    return search_aux(t->right, key, level+1);

}

void bstree::inorder_aux(node *t) {
    if (t != nullptr) {
        inorder_aux(t->left);
        cout << t->info << ' ';
        inorder_aux(t->right);
    }
}

void bstree::preorder_aux(node *t) {
    if (t != nullptr) {
        cout << t->info << ' ';
        preorder_aux(t->left);
        preorder_aux(t->right);
    }
}

void bstree::postorder_aux(node *t) {
    if (t != nullptr) {
        postorder_aux(t->left);
        postorder_aux(t->right);
        cout << t->info << ' ';
    }
}

// ------------ Member Function Implementations ------------

bstree::bstree() {
    root = nullptr;
}

int bstree::height() {
    return height_aux(root);
}

void bstree::insert(int x) {
    root = insert_aux(root, x);   // insert function uses an auxiliary function
}                                 // and stores the updated tree in its root

int bstree::search(int x) {
    return search_aux(root, x, 1);
}

int bstree::min() {
    if (root == nullptr) return 0;
    node *t = root;
    while (t->left != nullptr) t = t->left;
    return t->info;                           // this works because this is a binary SEARCH
}                                             // tree and thus every smaller number is stored
                                              // to the left side of every node and respectively
int bstree::max() {                           // every greater number to the right
    if (root == nullptr) return 0;
    node *t = root;
    while (t->right != nullptr) t = t->right;
    return t->info;                             
}

void bstree::inorder() {
    inorder_aux(root);
}

void bstree::preorder() {
    preorder_aux(root);
}

void bstree::postorder() {
    postorder_aux(root);
}

int main() {
    bstree BST;
    int N, M;

    cin >> N;
    int inserts[N];

    for (int i = 0; i < N; i++) {
        cin >> inserts[i];
        BST.insert(inserts[i]);
    }

    cin >> M;
    int searches[M];

    for (int i = 0; i < M; i++) {
        cin >> searches[i];
    }

    cout << BST.height() << endl;
    cout << BST.min() << ' ' << BST.max() << endl;
    
    for (int i = 0; i < M; i++) {
        cout << BST.search(searches[i]);
        if (i < M-1) cout << ' ';   // we don't want to print ' '
    }                               // after the last number
    cout << endl;

    BST.inorder();
    cout << "end" << endl;
    BST.preorder();
    cout << "end" << endl;
    BST.postorder();
    cout << "end" << endl;

    return 0;
}
