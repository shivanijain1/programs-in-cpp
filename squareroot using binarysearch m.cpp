#include <iostream>
using namespace std;
float squareRoot (int n,int p)
{
    int s=0,e=n;
    int mid;
    float ans;

    while(s<=e)
    {mid =(s+e)/2;
        if (mid*mid==n)
        {
            ans=mid;
            break;
        }
        else if (mid*mid<n)
        {
            ans=mid;
            s=mid+1;
        }
        else{
                e=mid-1;
        }
    }

    float inc=0.1;
    for (int i=0;i<p;i++)
    {
        while(ans*ans<n)
        {
        ans = ans+inc;
        }
        if (ans*ans>n)
        {
            ans =ans-inc;

        }
        inc =inc/10;
    }
     return ans;
}
int main ()
{
    cout<<squareRoot(14,2)<<endl;
    return 0;
}
