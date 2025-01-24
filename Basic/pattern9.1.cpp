#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your values"<<endl;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=row;
        while (col<row*2)
        {
            cout<<col<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
    