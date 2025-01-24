#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter your value: "<<endl;
    cin>>a;
    if(a>='A'&& a<='Z'){
    cout<<a<<" is Upper case."<<endl;
    }
    else if(a>='a'&&a<='z'){
        cout<<a<<"  is Lower case."<<endl;
    }
    else{
        cout<<a<<"  is Digit.";
    }

}