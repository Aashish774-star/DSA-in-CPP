#include <iostream>
using namespace std;
int main()
{
   int n;
   cout << "Enter your value:" << endl;
   cin >> n;
   int row = 1;
   while (row <= n)
   {
      int space=1;
      while (space<=n-row) 
      {
        cout<<" ";
        space=space+1;
      }
      int col=1;
      while (col<=row)
      {
        cout<<"*";
        col=col+1;
      }
    cout<<endl;
    row=row+1;  
   }
   }