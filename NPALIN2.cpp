#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf=1e15+1;

vector<int> v;

void sinhc(int x)
{
    int m=x/2;
    int mn=1,mx=9;
    for (int i=2; i<=m; i++)
    {
        mn*=10;
        mx=(mx*10+9);
    }
    for (int i=mn; i<=mx; i++)
    {
        int tmp=i;
        int val=i;
        while (tmp>0)
        {
            val*=10;
            val+=tmp%10;
            tmp/=10;
        }
        v.push_back(val);
    }
}

void sinhl(int x)
{
    int m=x/2;
    int mn=1,mx=9;
    for (int i=2; i<=m; i++)
    {
        mn*=10;
        mx=(mx*10+9);
    }
    for (int i=mn; i<=mx; i++)
    {

        for (int j=0; j<=9; j++)
        {
            int val=i*10+j;
            int tmp=i;
            while (tmp>0)
            {
                val*=10;
                val+=tmp%10;
                tmp/=10;
            }
            v.push_back(val);
        }
    }
}

void create()
{
    for (int i=1; i<=9; i++) v.push_back(i);
    for (int i=2; i<=13; i++)
    {
        if (i%2==0) sinhc(i);
        else sinhl(i);
    }
    v.push_back(inf);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    create();
    //cout<<1<<endl;
    //sort(v.begin(),v.end());
    //cout<<v.size()<<endl;
    int l,r;
    while (cin>>l>>r)
    {
        //int l,r;
        //cin>>l>>r;
        int pos1=lower_bound(v.begin(),v.end(),l)-v.begin();
        int pos2=upper_bound(v.begin(),v.end(),r)-v.begin();
        int ans=pos2-pos1;
        cout<<ans<<endl;
    }
}
