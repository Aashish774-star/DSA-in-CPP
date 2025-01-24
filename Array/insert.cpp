#include <iostream>
using namespace std;

int main()
{
    int arr[100], pos, i, n, val;
    cout << "Enter number of elements in array: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter position: ";
    cin >> pos;
    cout << "Enter the element to be inserted: ";
    cin >> val;

    for (i = n - 1; i >= pos - 1; i--)
        arr[i + 1] = arr[i];

    arr[pos - 1] = val;
    cout << "Resultant array is: ";
    for (i = 0; i <= n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
