#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                cnt++;
            }
        }
        if (cnt > (n / 2))
            return arr[i];
    }
}

int main()
{
    int arr[] = {1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = majorityElement(arr,n);
    cout << "The majority element is: " << ans << endl;
    return 0;
}