#include <bits/stdc++.h>
using namespace std;

int twoSum(int n,int arr[], int target) {
     
     for (int i = 0; i < n; i++)//n-1
    {
        for (int j = 0; j < n - i; j++)//n-i-1
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return 1;
        }
        else if (sum < target) left++;
        else right--;
    }
    return 0}

int main()
{
    int n = 5;
    int arr[]= {2, 6, 5, 8, 11};
    int target = 14;
    int ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}