#include <iostream>
using namespace std;
int printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing Done" << endl;
}
int main()
{
    int first[13] = {1};
    int n = 13;
    printArray(first, 10);

    int sec[10] = {2};
    int n1 = 10;
    printArray(sec, 10);
}