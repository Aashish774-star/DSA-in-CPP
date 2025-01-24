#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter your number: ";
    cin>>n;
    int dup = n;
    while(n>0)
    {
        int LD = n%10;
        sum = sum + (LD*LD*LD);
        n = n/10;
        int rev = (rev*10)+LD;
    }
    if(sum == dup)
    {
        cout<<"The number is an Armstrong number"<<endl;
    }
    else{
        cout<<"The number is not an Armstrong number"<<endl;
    }
}