#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter your value: ";
    cin>>n;

    bool isprime=1;
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            isprime=0;
            break;
        }}
        if (isprime==0)
        {
            cout<<"Not a prime number"<<endl;
        }
     else{
        cout<<"A prime number"<<endl;
        
    }
    
    
    
    }