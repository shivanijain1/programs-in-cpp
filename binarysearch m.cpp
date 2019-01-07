#include <iostream>
using namespace std;
int binarySearch (int a [],int n,int key)
{
    int s=0,e=n-1;

int m;
while (s<=e)
{m=(s+e)/2;
if (a[m]==key)

    return m;

else if(a[m]>key)

    e = m-1;

else


   s = m+1;

}

return -1;
}
int main ()
{
    int a[]={2,5,6,8,10,9,14};
    int n =sizeof (a)/sizeof (int);
int key;
cin>>key;
int searchIndex = binarySearch (a,n,key);
if  (searchIndex==-1)

    cout<<key<<"not present"<<endl;

else
    cout <<key<<" "<<"present at"<<searchIndex<<endl;

return 0;
}
