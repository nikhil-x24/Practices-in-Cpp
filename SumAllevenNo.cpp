#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Sum of all even numbers 0 to" <<" ";
    cin>>n;

    int i = 0;
    int sum = 0;

    while(i<=n)
    {
       sum = sum +i;
       i = i + 2;
    }
            cout<<"value of sum is "<< sum <<endl;
    return 0;
}
