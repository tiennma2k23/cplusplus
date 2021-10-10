
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
        for (int i=1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;
            ans=max(ans,a+b);
        }
        cout<<ans<<endl;
    }
}
