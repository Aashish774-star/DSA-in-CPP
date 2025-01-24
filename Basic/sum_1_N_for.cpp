#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter your value:  " ;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
}