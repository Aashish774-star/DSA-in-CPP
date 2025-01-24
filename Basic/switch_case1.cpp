#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter a Amount: ";
    cin >> amount;

    int num = 1;
    int note = 0;
    switch (num)
    {
    case 1:
    {
        note = amount / 100;
        amount = amount % 100;
        cout << "Rs.100 note requied is: " << note << endl;
    }
    case 2:
    {
        note = amount / 50;
        amount = amount % 50;
        cout << "Rs.50 note requied is: " << note << endl;
    }
    case 3:
    {
        note = amount / 20;
        amount = amount % 20;
        cout << "Rs.20 note requied is: " << note << endl;
    }
    case 4:
    {
        note = amount / 1;
        amount = amount % 1;
        cout << "Rs.1 note requied is: " << note << endl;
    }
    }
}