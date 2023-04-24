#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Value of n is " << endl;
    cin >> n;
    if (n > 0)
    {
        cout << "n is positive" << endl;
    }
    else if (n < 0)
    {
        cout << "n is negative" << endl;
    }
    else
    {
        cout << "n is zero" << endl;
    }
    // odd even code
    if (n % 2 == 0)
    {
        cout << "n is even" << endl;
    }
    else
    {
        cout << "n is odd" << endl;
    }
}
