#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1;
int l[maxn],L[maxn],r[maxn],R[maxn],d1[maxn];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin>>s;
    int ss=s.length();
    l[0]=1;
    for (int i = 0, _l = 0, _r = -1; i < ss; i++)
    {
        int k = (i > _r) ? 1 : min(d1[_l + _r - i], _r - i + 1);
        int k1=k-1;
        l[i-k1]= l[i-k1]=max(l[i-k1],2*k1+1),r[i+k1]=max(r[i+k1],2*k1+1);;
        while (0 <= i - k && i + k < ss && s[i - k] == s[i + k])
        {
            l[i-k]=max(l[i-k],2*k+1);
            r[i+k]=max(r[i+k],2*k+1);
            k++;
        }
        d1[i] = k--;
        if (i + k > _r)
        {
            _l = i - k;
            _r = i + k;
        }
    }
    int ans=0;
    /*int i=1,ans=0;
    l[0]=1;
    while (i<s.length())
    {
        l[i]=max(l[i],1ll);
        r[i]=max(r[i],1ll);
        int j;
        int sz=min(1ll*i,1ll*(ss-i-1));
        for (j=1;j<=sz;j++)
        {
            if (s[i-j]==s[i+j]) l[i-j]=max(l[i-j],2*j+1),r[i+j]=max(r[i+j],2*j+1);
            else break;
        }
        i++;
    }*/
    R[0]=1;
    for (int i=1; i<s.length(); i++) R[i]=max(R[i-1],r[i]);
    L[s.length()-1]=1;
    for (int i=s.length()-2; i>=0; i--) L[i]=max(L[i+1],l[i]);
    for (int i=1; i<s.length(); i++) ans=max(ans,L[i]*R[i-1]);
    //for (int i=0;i<ss;i++) cout<<R[i]<<endl;
    cout<<ans<<endl;
}
