#include<bits/stdc++.h>
using namespace std;
pair<int,int> a[100000];
bool cmp(pair<int,int> x, pair<int,int> y)
{
    return x.first*y.second<x.second*y.first;
}
int demsl(int k)
{
    int i,x,y,m=0,tmp,res=0;
    pair<int,int> t[100000];
    for (i=1;i<k;i++)
    {
        x=a[i].first-a[k].first;
        y=a[i].second-a[k].second;
        m++;
        t[m].first=x;t[m].second=y;
    }
    sort(t+1,t+1+m,cmp);
    tmp=1;
    for (i=2;i<=m;i++)
    {
        if (!cmp(t[i],t[i-1]) && !cmp(t[i-1],t[i])) res+=tmp++;
			else tmp=1;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i,n,j,d=0;
    char ch[110][110];
    cin>>n;
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
    {
        cin>>ch[i][j];
        if (ch[i][j]!='.')
        {
            d++;
            a[d].first=i;
            a[d].second=j;
        }
    }
    //sort (a+1,a+1+d);
    int ans=0;
    for (i=3;i<=d;i++) ans=ans+demsl(i);
    cout<<ans<<endl;
}
