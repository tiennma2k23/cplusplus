#include<bits/stdc++.h>
using namespace std;
long long vt[1000010];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long kq=0,d=0,i,k,dem;
    string s;
    cin>>k;
    cin>>s;
    if (k==0)
    {
        dem=0;
        for (i=0;i<s.length();i++)
        {
            if (s[i]=='0'&&s[i+1]=='0') dem++;
            else if (s[i]=='0'&&s[i+1]!='0')
            {
                dem++;
                kq=kq+dem*(dem+1)/2;
                dem=0;
            }
        }
        cout<<kq<<endl;
    }
    else{
        kq=0;
        for (i=0;i<s.length();i++)
        if (s[i]=='1')
        {
            d++;
            vt[d]=i+1;
        }
        vt[0]=0;
        vt[d+1]=s.length()+1;
        for (i=1;i<=d-k+1;i++)
            {
                kq=kq+vt[i]-vt[i-1]-1+vt[i+k]-vt[i+k-1]-1+(vt[i]-vt[i-1]-1)*(vt[i+k]-vt[i+k-1]-1)+1;
            }
        if (k<=d) cout<<kq<<endl;
    }
}
