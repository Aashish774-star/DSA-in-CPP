#include <iostream>
using namespace std;

void findlargest(int arr[], int n)
{
    int largest = arr[0];
    int slargest = -1; 

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > slargest && arr[i] != largest)
        {
            slargest = arr[i];
        }
    }

    if (slargest == -1) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "Largest element is " << largest << endl;
        cout << "Second largest element is " << slargest << endl;
    }
}

int main()
{
    int arr[5] = {82, 61, 331, 92, 31};
    int n = sizeof(arr) / sizeof(arr[0]);
    findlargest(arr, n);
    return 0;
}