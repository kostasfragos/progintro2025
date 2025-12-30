#include <iostream>
using namespace std;

struct thing {
    int num;
    int *ptr;
};

int main() {
    thing *p;
    p = new thing;
    p->num = 42;    // same with: (*p).num = 42;    
    p->ptr = nullptr;
}

