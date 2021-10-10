#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> x[10000];
    long long int q,n,i,j;
    bool kt;
    string s;
    cin>>q;
    while (q--)
    {
        cin>>n;
        for (i=1;i<=n;i++) cin>>x[i].first>>x[i].second;
        x[0].first=0;x[0].second=0;
        sort(x,x+n+1);
        s="";
        kt=false;
        for (i=0;i<=n-1;i++)
            if (x[i].second > x[i+1].second) {cout<<"NO"<<endl;kt=true;break;}
        if (kt==false)
        {
            for (i=0;i<=n-1;i++)
            {
                for (j=x[i].first;j<x[i+1].first;j++) s=s+'R';
                for (j=x[i].second;j<x[i+1].second;j++) s=s+'U';
            }
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
    }
}
