#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    int ok=1,cnt=0;
    for (int i=1;i<=n;i++)
    {
        char ch;
        cin>>ch;
        if (ch=='L')
        {
            if (ok)
            {
                ok=false;
                cnt++;
            }
        }
        if (ch=='R')
        {
            if (!ok)
            {
                ok=true;
                cnt++;
            }
        }
        if (ch=='B')
        {
            ok=(ok+1)%2;
            cnt+=2;
        }
    }
    if (ok) cnt++;
    cout<<cnt<<endl;
}
