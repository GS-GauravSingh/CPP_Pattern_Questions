#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = n - i; j < n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }

        for (int j = i; j < n; j++)
        {
            cout << "*";
        }
        for (int j = i; j < n - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}