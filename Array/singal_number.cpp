#include <iostream>
using namespace std;
/*
int singal_no(int arr[], int n)
{
    int i, num;
    for (int i = 0; i < n; i++)
    {
        num = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
            {
                count++;
            }
        }
        if (count == 1)
        {
            return num;
        }
    }
    return -1;
}
*/
 int singal_no(int arr[],int n)
 {
    int xorr = 0;
    for(int i = 0; i < n; i++){
    xorr = xorr ^ arr[i];
    }
    return xorr;
 }

int main()
{
    int arr[] = {1,1,2, 3, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The single number is " << singal_no(arr, n) << endl;
    return 0;
}