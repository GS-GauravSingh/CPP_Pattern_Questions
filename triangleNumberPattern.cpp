#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k < n; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}