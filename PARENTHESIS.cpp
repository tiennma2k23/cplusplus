#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    string s;
    cin>>t;
    while (t--){
    cin>>s;
    long long d=0,i;
    if ((s[0]=='('||s[0]=='*')&&(s[s.length()-1]==')'||s[s.length()-1]=='*')&&s.length()%2==0)
    {
        for (i=0;i<s.length();i++)
        {
            if (d<0) break;
            if (d==0&&s[i]=='*') d++;
            else if (d>0&&s[i]=='*') d--;
            if (s[i]=='(') d++;
            if (s[i]==')') d--;
        }
        if (d==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
    }
}
