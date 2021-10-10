#include <bits/stdc++.h>
using namespace std;
ifstream fi ("daycung.inp");
ofstream fo ("daycung.out");
int n,n2,u,v,t,b[200001]= {0},c[200001]= {0};
pair<int,int> p[100001];
int64_t res=0;
void insert_t(int a[],int x)
{
    while(x<=n2)
    {
        a[x]++;
        x+=(x&(-x));
    }
}
int sum_t(int a[],int x)
{
    int tg=0;
    while(x>0)
    {
        tg+=a[x];
        x&=(x-1);
    }
    return(tg);
}
void upd_t(int a[], int x)
{
    while(x<=n2)
    {
        a[x]--;
        x+=(x&(-x));
    }
}
int main()
{
    fi>>n;
    n2=n<<1;
    for(int i=1; i<=n; ++i)
    {
        fi>>u>>v;
        if(u>v)
        {
            t=u;
            u=v;
            v=t;
        }
        p[i].first=u;
        p[i].second=v;
        insert_t(b,u);
        insert_t(c,v);
    }
    sort(p+1,p+n+1);
    for(int i=1; i<=n; ++i)
    {
        t=sum_t(b,p[i].second) -sum_t(c,p[i].second);
        res+=t;
        upd_t(b,p[i].first);
        upd_t(c,p[i].second);
    }
    fo<<res;
}
