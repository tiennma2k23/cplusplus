#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    for (ll i=2;i<s.length();i++)
    {
        char ch=char((s[i-1]-'A'+s[i-2]-'A')%26+'A');
        if (ch!=s[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
