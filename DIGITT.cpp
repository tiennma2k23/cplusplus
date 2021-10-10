#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,k,ans;
    bool kt=false;
    cin>>a>>b>>k;
    a=a%b;
    while (k--)
    {
        ans=a*10/b;
        a=a*10%b;
        if (a==0) {kt=true;break;}
    }
    if (kt!=true) cout<<ans<<endl;
    else cout<<0<<endl;
}
