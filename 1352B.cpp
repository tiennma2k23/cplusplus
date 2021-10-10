#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,q,k;
    cin>>q;
    while (q--)
    {
        cin>>n>>k;
        if (n%k==0)
        {
            cout<<"YES"<<endl;
            for (i=1;i<=k;i++) cout<<n/k<<" ";
        }
        else if (n>=2*k&&(n-2*k+2)%2==0)
        {
            cout<<"YES"<<endl;
            for (i=1;i<k;i++) cout<<2<<" ";
            cout<<n+2-2*k<<" ";
        }
        else if (n>k&&(n-k+1)%2==1)
        {
            cout<<"YES"<<endl;
            for (i=1;i<k;i++) cout<<1<<" ";
            cout<<n-k+1<<" ";
        }
        else cout<<"NO";
        cout<<endl;
    }
}
