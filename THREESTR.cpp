#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    string a,b,c;
    bool kt;
    cin>>n;
    while (n--)
    {
        cin>>a>>b>>c;
        for (i=0;i<a.length();i++)
        {
            if (c[i]==a[i]||c[i]==b[i]) kt=true;
            else {kt=false;break;}
        }
        if (kt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
