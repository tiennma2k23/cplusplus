#include<bits/stdc++.h>
using namespace std;
long long max1=-100,top,moi[100000],dem,i,n;
vector<vector<int> >p(10010,vector<int>(10010));
long long int a[100000],s[100000],b[100000];
void DFS(int k)
{
    long long u;
    top=0;
    a[1]=k;top=1;dem=1;moi[k]=0;
    while (top>0)
    {
        bool kt=true;
        u=a[top];
        for (i=1;i<=s[u];i++)
        {
            if (b[p[u][i]]==1&&moi[p[u][i]]==1)
            {
                dem++;
                top++;
                a[top]=p[u][i];kt=true;moi[p[u][i]=0];
                break;
            }
            else {kt=false;break;}
        }
        if (kt==false) {top--;dem--;}
    }
}
int main()
{
    long long u,v;
    cin>>n;
    for (u=1;u<=n;u++) {cin>>b[u];moi[u]=1;}
    for (u=1;u<n;u++)
    {
        cin>>v;
        s[u]++;
        p[u][s[u]]=v;
    }
    s[n]++; p[u][s[n]]=n-1;
    for (u=1;u<=n;i++)
    {
        if (b[u]==1)
        {
            DFS(u);
            max1=max(max1,dem);
        }
    }
    cout<<max1<<endl;
}
