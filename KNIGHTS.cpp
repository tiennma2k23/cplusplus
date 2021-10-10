#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b;
    long long i,n,q;
    cin>>q>>n;
    t=1;
    for (i=1;i<=n-1;i++) t=t*2;
    while (q--)
    {
        cin>>a>>b;
        if (a>b) swap(a,b);
        if (a<=t&&b>t) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
