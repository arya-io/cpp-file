// Program for decimal to binary.
#include <iostream>
using namespace std;

// Function to convert decimal to binary
void DecToBin(int n)
{
    int binary[32]; // Array to store binary digits (enough to store up to 32 bits for int)
    int index = 0;  // Counter for binary digits

    // Edge case: if n is 0, print 0
    if (n == 0)
    {
        cout << "0";
        return;
    }

    // Convert decimal to binary
    while (n > 0)
    {
        binary[index] = n % 2; // Store remainder (binary digit)
        n = n / 2;
        index++;
    }

    // Output the binary number in reverse order
    for (int i = index - 1; i >= 0; i--)
    {
        cout << binary[i];
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // Output the binary form
    cout << "Binary form: ";
    DecToBin(n);
    cout << endl;

    return 0;
}