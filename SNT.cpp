#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SNT.inp","r",stdin);
    freopen("SNT.out","w",stdout);
    long long int n,i,d;
    unsigned long long int a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        d=0;
        for (i=1;i<=int(sqrt(a));i++)
        {
            if (a%i==0)
            {
                if (a/i==i) d++;
                else d=d+2;
            }
            if (d>3) break;
        }
        if (d==3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
