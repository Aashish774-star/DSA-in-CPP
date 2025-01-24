#include<iostream>
using namespace std;
 
 void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }

 void swapalternate(int arr[],int size){
    for(int i=0;i<size-1;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
 }
 }
 int main(){
    int even[8]={4,9,6,3,7,8,1,0};
    int odd[8]={3,1,7,2,9,5,0,1};
cout<<"Even values:";
    swapalternate(even,8);
    printarray( even,8);
cout<<"Odd values:";
    swapalternate(odd,8);
    printarray( odd,8);

    


 }