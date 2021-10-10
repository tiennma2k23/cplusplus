#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("vao.inp","r",stdin);
    freopen("ra.out","w",stdout);
    string s,s1,xau[10000];
    long long int l,r,k,d,i,t1,t2;
while (cin>>r>>l>>k)
{
    d=0;
    if (k==1)
    {
        string s=to_string(l);
        string s1=to_string(r);
        if (s<=s1) cout<<s<<endl;
        else cout<<s1<<endl;
    }
    else
    {

        if (l%k!=0) t2=l/k+1;else t2=l/k;
        if (r%k!=0) t1=r/k+1;else t1=r/k;
        for (i=t1;i<=t2;i++)
        {
            if ((i*k>=r)&&(i*k<=l))
            {
                d++;long long int kq=i*k;
                xau[d]=to_string(kq);
            }
        }

        if (d==0) cout<<"-1"<<endl;
        else
        {
            sort(xau+1,xau+1+d);
            cout<<xau[1]<<endl;
        }
    }
}
}
