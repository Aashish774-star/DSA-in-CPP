#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your value: ";
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << n << " "<< "Is Not Prime" << endl;
        }
        else
        {
            cout << n << " "<< "Is Prime" << endl;
        }
        i = i + 1;
        return 0;
    }
    }