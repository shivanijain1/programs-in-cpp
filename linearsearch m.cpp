#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int n;
    cin>>n;
    for (int i=1;i<=n; i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;

    for (int i=1;i<=n;i++)
{
    if (key==a[i])
    {
        cout<<"number found"<<i<<endl;
        break;
    }

if (i==n)
{
    cout<<"the number not found"<<endl;
}
}
return 0;
}
