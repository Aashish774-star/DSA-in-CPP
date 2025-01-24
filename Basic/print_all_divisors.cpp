#include<iostream>
using namespace std;
void printdivisors(int n)
{   int sum =0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        cout<<i<<" ";
        sum = sum +i;
        }
        
    }
        cout<<endl;
        cout<<"sum of divisors: "<<sum<<endl;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printdivisors(n);
    return 0;
}