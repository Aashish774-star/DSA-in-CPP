#include<iostream>
using namespace std;
int power(int a , int b){
    int ans=1;
    for(int i=1;i<=b;i++){
    ans=ans * a;
}
    return ans;

}
int main(){
    int a,b;
    cout<<"Enter your value for a"<<endl;
    cin>>a;
    cout<<"Entre your power for b"<<endl;
    cin>>b;
    int answer=power(a,b);
    cout<<"Answer is "<<answer<<endl;
    return 0;
}