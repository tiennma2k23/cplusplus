#include <bits/stdc++.h>
using namespace std;
long long n,i,t;
string s;
bool ok;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        if(n%2==1)
        {
            ok=false;
            for(i=0;i<s.size();i++)
                if((int(s[i])+48)%2==1&&((i+1)%2==1))
                {
                    cout<<1<<endl;
                    ok=true;
                    break;
                }
            if(!ok) cout<<2<<endl;
        }
        if(n%2==0)
        {
            ok=false;
            for(i=0;i<s.size();i++)
                if((int(s[i])+48)%2==0&&((i+1)%2==0))
                {
                    cout<<2<<endl;
                    ok=true;
                    break;
                }
            if(!ok) cout<<1<<endl;
        }
    }
}
