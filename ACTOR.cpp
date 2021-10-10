#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r,q,a,b,c,n,k,i,ss=0;
    cin>>r;
    cin>>q;
    for (i=1;i<=q;i++)
    {
        cin>>n>>a>>b>>c;
        if (r==1) cout<<max(a+b+c-2*n,ss)<<endl;
        else if (r==2) cout<<min(a,min(b,c))<<endl;
    }
}
