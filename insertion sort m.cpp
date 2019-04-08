#include<iostream>
using namespace std;
int main ()
{
  int n;
    cin>>n;
    int a[10];
    for (int i=0;i<n;i++)
    {

            cin>>a[i];
    }

for (int i=0;i<n;i++)
{int no=a[i];
    int j=i-1;
    while(j>=0&&a[j]>no)
    {
       a[j+1]=a[j];
j--;
} a[j+1]=no;
}
for (int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}

