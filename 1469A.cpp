#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q;
    deque<ll> st;
    cin>>q;
    while (q--)
    {
        string s;
        cin>>s;
        if (s.length()%2==1) cout<<"no"<<endl;
        else if (s[0]==')'||s[s.length()-1]=='(') cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
