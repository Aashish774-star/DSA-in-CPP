#include<iostream>
using namespace std;
 int main()
 {
    int a;
    cout<<"Enter your (+ve&-ve) number: ";

    cin>>a;

    if(a>0){
        cout<<a<<" is +ve number"<<endl;
    }
    else{
        if(a<0){
        cout<<a<<" is -ve number"<<endl;
    }
    else
    cout<<"It is zero"<<endl;

 }
 }