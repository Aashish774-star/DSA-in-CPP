#include <iostream>
using namespace std;
// Brute Force solution   T.C = O(n^2) S.C = O(1)
/*
void missingelement(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Missing element is " << i;
            return;
        }
    }
}
*/
// Better solution  T.C O(2n),S.C O(n)
/*
int missingelement(int arr[], int N)
{

    int hash[N + 1] = {0};
    for (int i = 0; i < N - 1; i++)
        hash[arr[i]]++;
    for (int i = 1; i <= N; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }
    return -1;
}
*/
// 1.optimal solution T.C = O(n),S.C = O(1)
/*
void missingelement(int arr[], int n)
{
    int sum = (n * (n + 1)) / 2;
    int sum1 = 0;
    // T.C = O(n) S.C = O(1)
    for (int i = 0; i < n - 1; i++)
    {
        sum1 += arr[i];
        }
        int missing = sum - sum1;
        cout << "Missing element is " << missing;
}
*/
// 2.OPtimal soution T.C = O(n)
/*
int missingelement(int arr[], int n) {

    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < n - 1; i++) {
        xor2 = xor2 ^ arr[i]; 
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ n;

    return (xor1 ^ xor2);
}
*/
int main()
{
    int arr[] = {1, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
   int ans =  missingelement(arr, n);
   cout << "Missing element is " << ans;
    return 0;
}