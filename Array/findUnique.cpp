#include <iostream>
using namespace std;

void findUnique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "The unique number is: " << ans << endl;
}

int main()
{
    int Unique[] = {1,2, 2, 54,99, 99,1};
    findUnique(Unique, 7);
    return 0;
}
