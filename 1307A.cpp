#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,n,x,a,max1,i;
    bool kt;
    cin>>q;
    while (q--)
    {
        kt=false;
        max1=-999999999;
        cin>>n>>x;
        for (i=1;i<=n;i++)
        {
            cin>>a;
            if (a==x) { cout<<1<<endl;kt=true;}
            max1=max(max1,a);
        }
        if (kt==false)
        {
            if (x<max1) cout<<2<<endl;
            else
            {
                if (x%max1==0) cout<<x/max1<<endl;
                else cout<<x/max1+1<<endl;
            }
        }
    }
}
