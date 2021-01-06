#include <stdio.h>
#include <iostream>

enum color { red, green = 5, blue };
int main()
{
    enum color a;
    a = red;
    printf("Hello World");
    std::cout << red;
    std::cout << blue;
    std::cout << green;
    return 0;
}


