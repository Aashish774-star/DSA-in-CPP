#include <iostream>
using namespace std;

void findlargest(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Largest element is " << max;
}
int main()
{
    int arr[5] = {82, 61, 331, 92, 31};
    int n = sizeof(arr) / sizeof(arr[0]);
    findlargest(arr, n);
    return 0;
}