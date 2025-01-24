#include <iostream>
#include <climits>
using namespace std;

// Returning max value

int getMax(int num[], int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

// Returning min value

int getMin(int num[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout << "Enter your size: ";
    cin >> size;

    int num[100];

    // Taking input in array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter your value:";
        cin >> num[i];
    }
    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minmum value is " << getMin(num, size) << endl;
}