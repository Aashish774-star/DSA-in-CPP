#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0, lastdigit;
    cout << "Enter a number: ";
    cin >> n;
    int dup = n;
        while (n > 0)
        {
            lastdigit = n % 10;
            n = n / 10;
            rev = (rev * 10) + lastdigit;
        }
        cout << rev<<endl;
    
    if(dup == rev)
    {
        cout<<"is palindrome";
    }
    else{
        cout<<" is not palindrome";
    }
    return 0;
}