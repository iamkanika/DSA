#include<iostream>
using namespace std;
// main
int main()
{
    int n;
    cout<<"Enter the value of n ="<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<j;
            j=j+1;
        }
    
    cout<<endl;
    i=i+1;
    }
}
