#include <iostream>
using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    int time=1;
    float ans =0;
    float inc=1;
    while(time<=p)
    {
        while(ans*ans <=n)
        {
            ans=ans+inc;
        }
        ans =ans-inc;
        inc =inc/10;
        time=time+1;
    }
cout<<ans<<endl;
return 0;
}
