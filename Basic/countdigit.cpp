#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, lastdigit;
    cout << "enter your nmubers: ";
    cin >> n;
    while (n > 0)
    {
        lastdigit = n % 10;
        count = count + 1;
        n = n / 10;
    }
    cout << "Number of digits in the number: " << count;
}