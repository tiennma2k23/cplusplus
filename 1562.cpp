#include<bits/stdc++.h>
using namespace std;

bool ok(int x,int l,int r)
{
    if (x<=l)
    {
        if (x+l>r) return false;
    }
    else
    {
        if (x*2+1>r) return false;
    }
    return true;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int l,r,ans=0;
        cin>>l>>r;
        if(l*2>r) cout<<r%l<<endl;
        else
        {
            int a=r/2+1;
            int b=l*2-1;
            cout<<max(r%a,b%l)<<endl;
        }
    }
}
