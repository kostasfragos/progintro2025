#include <iostream>
#include <cstring>
// #include <string>

int main() {
    int b;
    char a[b];
    strcpy(a, "Hello World!");
    printf("%s\n", a);

    std::string x = "Hello World!";
    // std::cout << a << std::endl;
    printf("%s\n", x.c_str());

    char name[30];
    std::cout << "What's your name?: ";
    scanf("%s", name);
    // std::cin >> name;
    
    char hello[] = "Hello ";
    printf("%s\n", strcat(hello, name));
    
    printf("Your name has %d letters.\n", strlen(name));
    // std::cout << "Your name has " << strlen(name) << " letters.";

    printf("%d", strcmp("ding", "dong"));
}