#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
            {if(j<i&&j>1)
            cout<<"0";
        else
            cout<<i;
            }
        cout<<endl;
    }
return 0;}
