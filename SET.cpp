#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<long long,long long> c[100000];
    long long a,b,k,t,q,l,r,d,i;
    cin>>t;
    while (t--)
    {
        cin>>k>>a>>b;
        d=1;
        c[1].first=a;
        c[1].second=b;
        while(a>1&&b>1)
        {
            if (a%k==0&&b%k==0)
            {
                d++;
                c[d].first=a/k;
                c[d].second=b/k;
                a=a/k;
                b=b/k;
            }
            else if (a%k==b%k)
            {
                d++;
                c[d].first=(a+k-a%k)/k;
                c[d].second=(b+k-b%k)/k;
                a=(a-a%k+k)/k;
                b=(b-b%k+k)/k;
            }
            else break;
        }
        cin>>q;
        while (q--)
        {
            cin>>l>>r;
            bool kt=false;
            for (i=1;i<=d;i++)
            {
                if (l==c[i].first||l-c[i].first==r-c[i].second||l==c[i].first&&r==c[i].second) {kt=true;break;}
            }
            if (kt) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
