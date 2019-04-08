#include<iostream>
using namespace std;
int main ()
{

  int n;
    cin>>n;
    int freq [7]={0};
    int a[7]={0,5,3,6,5,2,0};


for (int i=0;i<7;i++)
{
for (int j=0;j<7;j++){
if (a[j]==i)
   freq[i]+=1;
}}
for (int i=0;i<7;i++)
{
    while (freq[i]>0)
    {
        cout<<i<<" ";

    freq[i]--;
}}

return 0;
}
