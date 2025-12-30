#include <iostream>
#include <cstdio> // δουλεύει και με <cstdio>
using namespace std; 

struct date {
    int day = 18, month = 1, year = 2007;
};

struct student {
    date birthDate;
};

union number {int i; double r;};

int main() {
    student s;
    printf("Your birthday is: %d / %d / %d\n", s.birthDate.day, s.birthDate.month, s.birthDate.year);
    
    number n;
    n.r = 1.2;
    // printf("%lf\n", n.r);
    n.i = 42;
    printf("%d %lf\n", n.i);
    printf("%lf\n", n.r);

    return 0;
}

