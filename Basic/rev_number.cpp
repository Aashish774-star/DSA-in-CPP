#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0, lastdigit;
    cin >> n;
    if (n > 0)
    {
        while (n > 0)
        {
            lastdigit = n % 10;
            n = n / 10;
            rev = (rev * 10) + lastdigit;
        }
        cout << rev;
    }
    else if (n < 0)
    {
        n = n * (-1);
        while (n > 0)
        {
            lastdigit = n % 10;
            n = n / 10;
            rev = (rev * 10) + lastdigit;
        }
        cout << (rev * (-1));
    }
}