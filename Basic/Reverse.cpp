#include <iostream>
using namespace std;
int reverse(int arr[], int n);
int n;
int start = 0;
int end = n - 1;
while (start <= end)
{
    swap(arr[start], arr[end]);
    start++;
    end--;
}

int PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 4, 0, -4, 9, 16};
    int arr1[5] = {2, 6, 3, 9, 4};

    reverse(arr, 6);
    reverse(arr1, 5);

    PrintArray(arr, 6);

    PrintArray(arr1, 5);

    return 0;
}

int reverse(int arr[], int n)
{
    return 0;
}
