#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,t=0,d=0,d2=0;
    freopen("CNTPAIR.inp","r",stdin);
    freopen("CNTPAIR.out","w",stdout);
    cin>>n;
    while (n--)
    {
        cin>>a;
        if (abs(a)%2==1)
        {
            d++;
            t=t+d-1;
        }
        else
        {
            d2++;
            t=t+d2-1;
        }
    }
    cout<<t<<endl;
}
