#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e5+1;
  map<pair<long long,long long>, char> mp;
    deque<long long> h[MAXN],d[MAXN];
int main()
{
    long long i,j,n,q,l,r;
    char ch;
    cin>>n>>q;
    for (i=1;i<=n;i++)
    for (j=1;j<=n;j++) mp[{i,j}]='?';
    for (i=1;i<=q;i++)
    {
        cin>>ch>>l>>r;
        if (ch=='A')
        {
            h[l].push_back(r);
            h[r].push_back(l);
            mp[{l,r}]='A';
            for (j=0;j<h[l].size();j++)
            {
                d[r].push_back(h[l][j]);

                mp[{r,h[l][j]}]='R';
                mp[{h[l][j],r}]='R';
            }

            for (j=0;j<h[r].size();j++)
            {
                d[l].push_back(h[r][j]);

                mp[{l,h[r][j]}]='R';
                mp[{h[r][j],l}]='R';
            }

            for (j=0;j<d[r].size();j++)
            {
                h[l].push_back(d[r][j]);

                mp[{l,d[r][j]}]='A';
                mp[{d[r][j],l}]='A';
            }

            for (j=0;j<d[l].size();j++)
            {
                h[r].push_back(d[l][j]);

                mp[{r,d[l][j]}]='A';
                mp[{d[l][j],r}]='A';
            }
        }

        else if (ch=='R')
        {
            d[l].push_back(r);
            d[r].push_back(l);
            mp[{l,r}]='R';
            for (j=0;j<h[l].size();j++)
            {
                h[r].push_back(h[l][j]);

                mp[{r,h[l][j]}]='A';
                mp[{h[l][j],r}]='A';
            }

            for (j=0;j<h[r].size();j++)
            {
                h[l].push_back(h[r][j]);

                mp[{l,h[r][j]}]='A';
                mp[{h[r][j],l}]='A';
            }

            for (j=0;j<d[r].size();j++)
            {
                d[l].push_back(d[r][j]);
//                d[d[r][j]].push_back(d[l]);
                mp[{l,d[r][j]}]='R';
                mp[{d[r][j],l}]='R';
            }

            for (j=0;j<d[l].size();j++)
            {
                d[r].push_back(d[l][j]);
//                d[d[l][j]].push_back(d[r]);
                mp[{r,d[l][j]}]='R';
                mp[{d[l][j],r}]='R';
            }
        }
        else cout<<mp[{l,r}]<<endl;
    }
}
