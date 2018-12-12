#include <iostream>
using namespace std;
int main()
{int n;
cin>>n;
int s=n-1;
int m=1;
    for (int i=1;i<=n;i++)
    {int k=0;
for (int j=1;j<=s;j++)
{
    cout<<" ";}
    for (int j=1;j<=m;j++)
    {
        if (j<=i)
{


            k=k+1;}
        else{
        k=k-1;}
        cout<<k;
    }
    s--;
    m=m+2;

cout<<endl;
}
return 0;
}
