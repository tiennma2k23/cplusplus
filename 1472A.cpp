//COde by NMT
//Author: Thinh Nguyen
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[100],t[100];
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        t[0]=0;
        cin>>n;
        for(ll i=1; i<=n; i++)
            cin>>a[i];
        sort(a+1,a+1+n);
        for(ll i=1; i<=n; i++)
            t[i]=t[i-1]+a[i];
        if(t[n]==0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(t[n]<0)
                for(ll i=1; i<=n; i++)
                    cout<<a[i]<<' ';
            else
                for(ll i=n; i>=1; i--)
                    cout<<a[i]<<' ';
            cout<<endl;
        }
    }
}
