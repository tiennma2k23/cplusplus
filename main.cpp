#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,s1;
    bool kt;
    long long i;
    while (true)
    {
        cin>>a>>b;
        kt=false;
        for (i=0;i<a.length()-b.length()+1;i++)
        {
            s1=a.substr(i,b.length());
            if (s1==b) {kt=true;break;}
        }
        if (kt) cout<<1<<endl;
        else cout<<0<<endl;
    }
}
