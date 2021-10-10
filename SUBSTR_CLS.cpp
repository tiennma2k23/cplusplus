#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#define TASK ""
    //freopen(TASK ".inp","r",stdin);
    //freopen(TASK ".out","w",stdout);

    int n;
    string s;
    deque<int> p0[2],p1[2];
    cin>>n;
    cin>>s;
    for (int i=0;i<n;i++)
    {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            p0[0].push_back(i);p0[1].push_back(i);
        }
        else p1[0].push_back(i),p1[1].push_back(i);
    }

    int ans=n;
    //0110
    int cnt=0,len=0,l=0,r=n-1;
    while (true)
    {
        if (cnt%2==0)
        {
            while (p0[0].size() && p0[0].front()<l) p0[0].pop_front();
            while (p0[0].size() && p0[0].back()>r) p0[0].pop_back();
            if (p0[0].size()<2) break;
            l=p0[0].front();
            r=p0[0].back();
            p0[0].pop_front();
            p0[0].pop_back();
        }
        else
        {
            while (p1[0].size() && p1[0].front()<l) p1[0].pop_front();
            while (p1[0].size() && p1[0].back()>r) p1[0].pop_back();
            if (p1[0].size()<2) break;
            l=p1[0].front();
            r=p1[0].back();
            p1[0].pop_front();
            p1[0].pop_back();
        }
        cnt++;
        len+=2;
    }
    ans=min(ans,n-len);
    //1001
    cnt=0,len=0,l=0,r=n-1;
    while (true)
    {
        if (cnt%2)
        {
            while (p0[1].size() && p0[1].front()<l) p0[1].pop_front();
            while (p0[1].size() && p0[1].back()>r) p0[1].pop_back();
            if (p0[1].size()<2) break;
            l=p0[1].front();
            r=p0[1].back();
            p0[1].pop_front();
            p0[1].pop_back();
        }
        else
        {
            while (p1[1].size() && p1[1].front()<l) p1[1].pop_front();
            while (p1[1].size() && p1[1].back()>r) p1[1].pop_back();
            if (p1[1].size()<2) break;
            l=p1[1].front();
            r=p1[1].back();
            p1[1].pop_front();
            p1[1].pop_back();
        }
        cnt++;
        len+=2;
    }
    ans=min(ans,n-len);
    cout<<ans<<endl;
}
