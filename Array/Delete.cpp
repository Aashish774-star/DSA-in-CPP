#include <iostream>
using namespace std;

int main() {
    int arr[100], pos, i, n;

    cout << "Enter number of elements in array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the location where you wish to delete an element: ";
    cin >> pos;

    if (pos >= n + 1)
        cout << "Deletion not possible." << endl;
    else {
        for (i = pos - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];

        cout << "Resultant array: " << endl;
        for (i = 0; i < n - 1; i++)
            cout << arr[i] << endl;
    }
    return 0;
}
