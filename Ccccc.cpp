#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e5+10,MAX=1e9+7;
long long a[MAXN];
bool cmp(long long a, long long b)
{
    return a>b;
}
int main()
{
    long long n,i,k,q,key,l,res;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n,cmp);
    cin>>q;
    while (q--)
    {
        cin>>k;
        key=0;
        l=1;
        res=0;
        while (l<=n)
        {
            if (a[l]>key)
            {
                res=res+a[l]-key;
                key=key+k;
                l++;
            }
            else break;
        }
        cout<<res<<endl;
    }
}
