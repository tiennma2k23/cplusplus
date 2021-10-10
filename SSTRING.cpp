#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s1,s2;
int main()
{
    ll i,n;
    cin>>n;
    for (i=1;i<n;i++)
    {
        s1+='1';
        s2=s1;
    }
    s1+="10";
    s2+="01";
    for (i=1;i<n;i++)
    {
        s1+='0';
        s2+='0';
    }
    cout<<s1<<endl<<s2<<endl;
}
