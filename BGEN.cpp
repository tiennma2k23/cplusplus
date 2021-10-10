
#include<bits/stdc++.h>
using namespace std;
const int maxn=10;
int n;
bool ck[maxn];
int a[maxn];
vector< vector<int> > v;
map<vector<int>,int> mp;
void ahihi()
{
    vector<int> tmp;
    for (int i=1;i<=n;i++)
    {
        tmp.push_back(a[i]);
    }
    v.push_back(tmp);
}

void create(int k)
{
    for (int i=1; i<=n; i++)
    {
        if (!ck[i])
        {
            a[k]=i;
            ck[i]=true;
            if (k==n) ahihi();
            else create(k+1);
            ck[i]=false;
        }
    }
}
bool kt(int i, int j)
{
    int dem=0;
    for (int i1=0;i1<v[i].size();i1++) if (v[i][i1]!=v[j][i1]) dem++;
    return (dem<=2);
}

void truyvet()
{
    int ans=0,vt;
    for (int i=0;i<v.size();i++)
    {
        ans=max(ans,mp[v[i]]);
        if (mp[v[i]]==ans) vt=i;
    }
    //cout<<ans<<endl;
    int res=ans;
    cout<<res<<endl;
}

int main()
{
    freopen("output.txt","w",stdout);
    int dem=0;
    cin>>n;
    create(1);
    sort(v.begin(),v.end());
    /*for (int i=0;i<v.size();i++)
    {
        for (auto val:v[i]) cout<<val<<" ";
        cout<<endl;
    }*/
    for (int i=0;i<v.size();i++) mp[v[i]]=1;
    vector<int> _temp;
    for (int i=0;i<v.size();i++)
    {
        _temp.clear();
        for (auto val:v[i]) _temp.push_back(val);
        for (int j=0;j<_temp.size()-1;j++) if (_temp[j]>_temp[j+1])
        {
            swap(_temp[j],_temp[j+1]);
            //mp[v[i]]=max(mp[v[i]],mp[_temp]+1);
            mp[_temp]=max(mp[_temp],mp[v[i]]+1);
            swap(_temp[j],_temp[j+1]);
        }
    }
    truyvet();
}
