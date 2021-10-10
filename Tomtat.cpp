#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
struct Data
{
    int x,y,z;
};
vector<Data> hvi;
void create()
{
hvi.push_back({0,1,2});
hvi.push_back({0,2,1});
hvi.push_back({1,2,0});
hvi.push_back({1,0,2});
hvi.push_back({2,1,0});
hvi.push_back({2,0,1});
}

unsigned int dientich(int x,int y, int z)
{
    unsigned int p=(x+y+z)/2;
    unsigned int res=p*(p-x)*(p-y)*(p-z);
    return res;
}

bool ck(int x,int y, int z)
{
    return (x>0&&y>0&&z>0&&(x+y>z)&&(abs(x-y)<z)&&(x+z>y)&&(abs(x-z)<y)&&(z+y>x)&&(abs(z-y)<x));
}

void solve()
{
    int a[10],s[10];
    vector<II> p;
    vector<int> v,day;
    for (int i=1;i<=6;i++) cin>>a[i];
    for (int i=1;i<=4;i++)
        for (int j=i+1;j<=5;j++)
        for (int z=j+1;z<=6;z++)
    {
        p.clear(),v.clear();day.clear();
        s[1]=dientich(a[i],a[j],a[z]);
        if (!ck(a[i],a[j],a[z])) continue;
        for (int i1=1;i1<=6;i1++) {if(i1!=i&&i1!=j&&i1!=z) v.push_back(a[i1]);else day.push_back(a[i1]);}
        for (int d1=0;d1<v.size()-1;d1++)
            for (int d2=d1+1;d2<v.size();d2++) p.push_back(II(v[d1],v[d2]));
        for (auto k1:hvi)
        for (auto k:hvi)
        {
            if (ck(day[k1.x],p[k.x].fi,p[k.x].se)&&ck(day[k1.y],p[k.y].fi,p[k.y].se)&&ck(day[k1.z],p[k.z].fi,p[k.z].se))
            {
                s[2]=dientich(day[k1.x],p[k.x].fi,p[k.x].se);
                s[3]=dientich(day[k1.y],p[k.y].fi,p[k.y].se);
                s[4]=dientich(day[k1.z],p[k.z].fi,p[k.z].se);
                sort(s+1,s+4);
                int res=1ull*(1ull*(s[1]+s[2]+s[3])+1ull*2*(sqrt(s[1]*s[2])+sqrt(s[2]*s[3])+sqrt(s[1]*s[3])));
                //cerr<<res<<endl;
                if (res==s[4]){
                //cout<<a[i]<<" "<<p[k.x].fi<<" "<<p[k.x].se<<endl;
                //cout<<a[i]<<" "<<a[j]<<" "<<a[z]<<endl;
                cout<<"Yes"<<endl;
                return;
                }
            }
        }
    }
    cout<<"No"<<endl;
}

int32_t main()
{
    int q;
    create();
    cin>>q;
    while (q--) solve();
}
