#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,d=0,d2=0,d1=-1,l=0,q;
    cin>>q;
    while (q--){
    string s;
    cin>>s;
    d=0;d2=0;d1=-1;
    for (i=s.length()-1;i>=0;i--) if (s[i]=='1') {l=i;break;}
    for (i=0;i<=l;i++)
    {
        if (s[i]=='1') d++;
        else if (s[i]=='0'&&s[i-1]=='1'&&d1==-1)
        {
            d1=d;
            d2++;
        }
        else if (d1!=-1&&s[i]=='0') d2++;
    }
    if (d==d1) cout<<0<<endl;
    else cout<<d2<<endl;
    }
}
