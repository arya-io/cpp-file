// Program without main

// 1. using static initializer
#include <iostream>
using namespace std;

int execute()
{
    cout << "Under execute function";
    exit(EXIT_SUCCESS);
}

static int s = execute();

int main()
{
    cout << "Inside main function" << endl;
}