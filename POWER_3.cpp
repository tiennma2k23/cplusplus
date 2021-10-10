#include<bits/stdc++.h>
using namespace std;
const long long maxn=1e6;
map<long long,int> ck;
int main()
{
   long long i,tmp,q,x;
    for (i=0;i<=maxn;i++)
    {
        tmp=i*i*i;
        ck[tmp]=1;
    }
    cin>>q;
    while (q--)
    {
        cin>>x;
        if (ck[x]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
