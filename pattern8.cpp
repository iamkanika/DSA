#include<iostream>
using namespace std;
// pattern program
int main()
{
    int n;
    cout<<"Enter the value of n="<<endl;
    cin>>n;
    int i=0;
    while (i<n)
    {
        int j=1;
        while (j<=n-i)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}
