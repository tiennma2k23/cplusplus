#include<bits/stdc++.h>
using namespace std;
long long q,n1,n2,n3,i;
string ans;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>q;
    while (q--)
    {
        ans="";
        cin>>n1>>n2>>n3;
        if (n1==0&&n2==0)
                for (i=1;i<=n3+1;i++) ans=ans+'1';
        else
            {
                for (i=1;i<=n1+1;i++) ans=ans+'0';
                for (i=1;i<=n2;i++)
                    {
                        if (i%2==1) ans=ans+"1";
                        else ans=ans+"0";
                    }
                if (ans[ans.length()-1]=='0'&&n2>0)
                {
                    ans.erase(ans.length()-1,1);
                    ans="1"+ans;
                }
                for (i=1;i<=n3;i++) ans=ans+'1';
            }
        cout<<ans<<endl;
    }
}
