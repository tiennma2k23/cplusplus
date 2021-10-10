#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while (n--)
    {
        string a,b,c;
        long long i;
        bool kt=true;
        cin>>a>>b>>c;
        for (i=0;i<c.length();i++)
        {
            if (c[i]==a[i]||c[i]==b[i]) kt=true;
            else {kt=false;break;}
        }
        if (kt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
