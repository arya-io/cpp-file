// using a constructor

#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Inside the constructor" << endl;
        exit(EXIT_SUCCESS);
    }
};

static Demo s;

int main()
{
    cout << "Inside the main function" << endl;
}