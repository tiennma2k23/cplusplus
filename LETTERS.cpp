#include<bits/stdc++.h>
using namespace std;
int main()
{
    char l,r;
    int n;
    string s;
    int ans=0;
    cin>>n;
    cin>>s;
    l=s[0];
    if (s[0]=='?') l='a';
    for (int i=1;i<s.length();i++)
    {
        if (s[i]=='a'||s[i]=='b')
        {
            if (s[i]=='a')
            {
                if (l=='a') ans+=0;
                else ans-=1;
            }
            else
            {
                if (l=='a') ans+=1;
                else ans+=0;
            }
            l=s[i];
        }
    }
    if (l=='a'&&l!=s[n-1]) ans++;
    cout<<ans<<endl;
}
