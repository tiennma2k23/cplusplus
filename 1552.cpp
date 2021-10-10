#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;

    while (q--)
    {
        int n,ans=0;
        cin>>n;
        char ch[n+5],ch1[n+5];
        for (int i=1;i<=n;i++) cin>>ch[i],ch1[i]=ch[i];
        sort(ch+1,ch+1+n);
        for (int i=1;i<=n;i++) ans+=(ch[i]!=ch1[i]);
        cout<<ans<<endl;
    }
}
