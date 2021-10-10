#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll kt[1000],d[1000],n,res;
string s;
vector<char> gr[1000];

void solve1()
{
    ll ans=0;
    ll mid=n/2;
    ll l=mid-1;
    ll r=mid;
    while (l>=0&&r<n)
    {
        if (kt[s[l]]!=kt[s[r]])
        {
            if (d[kt[s[l]]]<d[kt[s[r]]])
            {
                ans+=d[kt[s[l]]];
                d[kt[s[r]]]+=d[kt[s[l]]];
                d[kt[s[l]]]=0;
                for (auto ch:gr[kt[s[l]]])
                {

                    gr[kt[s[r]]].push_back(kt[ch]);kt[ch]=kt[s[r]];
                }
                gr[kt[s[l]]].clear();
            }
            else
            {
                ans+=d[kt[s[r]]];
                d[kt[s[l]]]+=d[kt[s[r]]];
                d[kt[s[r]]]=0;
                for (auto ch:gr[kt[s[r]]])
                {

                    gr[kt[s[l]]].push_back(kt[ch]);kt[ch]=kt[s[l]];
                }
                gr[kt[s[r]]].clear();
            }
        }
        l--;r++;
    }
    cout<<min(ans,res)<<endl;
}

void solve2()
{
    ll ans=0;
    ll mid=n/2;
    ll l=mid-1;
    ll r=mid+1;
    while (l>=0&&r<n)
    {
        if (kt[s[l]]!=kt[s[r]])
        {
            if (d[kt[s[l]]]<d[kt[s[r]]])
            {
                ans+=d[kt[s[l]]];
                d[kt[s[r]]]+=d[kt[s[l]]];
                d[kt[s[l]]]=0;
                for (auto ch:gr[kt[s[l]]])
                {

                    gr[kt[s[r]]].push_back(ch);kt[ch]=kt[s[r]];
                }
                gr[kt[s[l]]].clear();
            }
            else
            {
                ans+=d[kt[s[r]]];
                d[kt[s[l]]]+=d[kt[s[r]]];
                d[kt[s[r]]]=0;
                for (auto ch:gr[kt[s[r]]])
                {

                    gr[kt[s[l]]].push_back(ch);kt[ch]=kt[s[l]];
                }
                gr[kt[s[r]]].clear();
            }
        }
        l--;r++;
    }
    cout<<min(ans,res)<<endl;
}

int main()
{
    cin>>s;
    ll max1=LLONG_MIN;
    n=s.length();
    for (ll i=0;i<n;i++)
    {
        kt[s[i]]=s[i];
        d[s[i]]++;
        max1=max(max1,d[s[i]]);
    }
    res=n-max1;
    cout<<n<<endl;
    cout<<res<<endl;
    if (n%2==0)
    {
        solve1();
    }
    else solve2();
}
