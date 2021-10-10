#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void solve()
{
    int n,res=0;
    cin>>n;
    int n1=n;
    v.clear();
    for (int i=2;i*i<=n1;i++)
    {
        if (n1%i==0) v.push_back(i);
        while (n1%i==0) n1/=i;
    }
    if (n1!=1) v.push_back(n1);
    int s=v.size();
    //cout<<s<<endl;
    //cout<<s<<endl;
    for (int mask=0;mask<(1<<s);mask++)
    {
        int tmp=1,dem=0;
        for (int i=0;i<s;i++)
        {
            if (mask&(1<<i))
            {
                tmp*=v[i];
                dem++;
            }
        }
        //cout<<dem<<" "<<tmp<<endl;
        if (dem%2&&dem!=0) res+=n/tmp;
        else if (dem!=0) res-=n/tmp;
    }
    //cout<<res<<endl;
    cout<<n-res<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
