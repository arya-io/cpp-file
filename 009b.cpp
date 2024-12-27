// Program without main

// using macro definition

#include <iostream>
#define replace(a, b, c, d) a##b##c##d
#define execute replace(m, a, i, n)

int execute()
{
    std::cout << "hello world";
    return 0;
}