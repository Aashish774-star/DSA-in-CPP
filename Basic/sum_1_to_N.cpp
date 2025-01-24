#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number:"<<endl;
    cin>>n;
    int sum=0;
    int i=1;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"Sum of "<<1<<" to "<<n<<" = "<<sum<<endl;
    
}