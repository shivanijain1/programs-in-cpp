#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m= (2*n)-2;

    for (int i=1;i<=n;i++)
    {

int k=i+1;
        for (int j=1;j<=i;j++)
        {
            cout<<j;
        }
for (int j=1;j<=m;j++ )

{
    cout<<" ";
}
for (int j=1;j<=i;j++)
{
    if (j<=i)
        {
    k=k-1;}
cout<<k;}
     cout<<endl;

m=m-2;
    }
return 0;
}
