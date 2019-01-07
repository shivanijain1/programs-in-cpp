#include <iostream>
using namespace std;
int upperBound(int a [],int n,int key)
{
    int s=0,e=n-1;
int ans=-1;
int m;

while (s<=e)
{m=(s+e)/2;
if (a[m]==key)
{
    ans=m;
    s =m+1;
}
else if(a[m]>key)
{
    e = m-1;
}
else
   {

   s = m+1;
}
}
return ans;
}
int main ()
{
    int a[]= {1,2,3,3,3,6,9};
    int n=sizeof (a)/sizeof (int);

int key;
cin>>key;
int ans = upperBound (a,n,key);
cout<<"upper bound is"<<ans<<endl;
return 0;
}
