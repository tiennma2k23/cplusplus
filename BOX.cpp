#include<bits/stdc++.h>
using namespace std;
int main()
{
bool kt=true;
long long int i,n,q[100000],p[100000],d[100000],j,t,k;
vector<long long int> v;
cin>>t;
while (t--)
{
    cin>>n;
    for (i=1;i<=n;i++) {cin>>q[i];v.push_back(i);}
    q[0]=0;
    for (i=1;i<=n;i++)
    {
        if (q[i]!=q[i-1]) {p[i]=q[i];v.erase(v.begin()+q[i]);}
        else {p[i]=v[1];v.erase(v.begin()+1);}
        if (v.size()==0) break;
    }
    for (i=1;i<=n;i++) if (d[i]==0) {kt=false;break;}
    if (kt) for (i=1;i<=n;i++) cout<<p[i]<<" ";
    else cout<<-1;
    cout<<endl;
}
}
