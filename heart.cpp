#include <iostream>
using namespace std;

int main()
{
    int n = 6;

    // Upper Part
    for (int i = n / 2; i <= n; i += 2)
    {
        // Left Spaces
        for (int j = 1; j < n - i; j += 2)
            cout << " ";

        // Left Stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        // Middle Spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Right Stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower Part
    for (int i = n; i >= 1; i--)
    {
        // Left Spaces
        for (int j = i; j < n; j++)
            cout << " ";

        // Stars
        for (int j = 1; j <= (i * 2) - 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
