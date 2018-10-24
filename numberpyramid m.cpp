#include<iostream>
using namespace std;
int main()
{

    int n,l=1;
    cin>>n;
    for (int i=1; i<=n; i++)
    {

        for(int j=n-i; j>=1; j--)
        {
            cout<<" ";

        }
    for(int j=1; j<=l; j++)
    {
        cout<<j;
    }cout<<endl;

    l=l+2;
        }
        return 0;
}
