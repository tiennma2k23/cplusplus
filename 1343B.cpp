#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,tmp=0;
    cin>>t;
    while (t--)
    {
        tmp=0;
        cin>>n;
        if (n%4!=0) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for (i=1;i<=n/2;i++)
            {
                cout<<i*2<<" ";
                tmp=tmp+i*2;
            }
            for (i=1;i<n/2;i++) {cout<<i*2-1<<" ";tmp=tmp-i*2+1;}
            cout<<tmp<<endl;
        }
    }
}
