#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,b[1000];
    cin>>q;
    while (q--)
    {
        long long t,dem,ans=0,i;
        string s;
        cin>>s;
        memset(b,dem,0);
        t=0;dem=0;
        for (i=0;i<s.length();i++)
        {
            if (s[i]=='1') t++;
            else if (s[i]=='0'&&t!=0)
            {
                dem++;
                b[dem]=t;
                t=0;
            }
        }
        if (s[s.length()-1]=='1') dem++,b[dem]=t;
        sort(b+1,b+1+dem);
        for (i=dem;i>=1;i-=2) ans+=b[i];
        cout<<ans<<endl;
    }
}
