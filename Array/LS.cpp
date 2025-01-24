#include <iostream>
using namespace std;

bool LinearSearch( int arr[],int n,int key)
{
    for( int i = 0; i< n;i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr [] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 22;
     int val = LinearSearch(arr,n,key);
     cout<<val;
}
