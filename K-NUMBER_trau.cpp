
#include<bits/stdc++.h>
using namespace std;
int a[1001];
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        for (int i=1;i<=n;i++) cin>>a[i];
        for (int k=1;k<=n;k++)
        {
            bool ck=0;
            for (int i=1;i<=n;i++)
            {
                int dem=0;
                for (int pos=1;pos<=n-k+1;pos++)
                    for (int j=pos;j<=pos+k-1;j++) if (a[j]==i) {dem++;break;}
                if (dem==n-k+1) {
                    cout<<i<<" ";
                    ck=true;
                    break;
                }
            }
            if (!ck)cout<<-1<<" ";
        }
        cout<<endl;
    }
}
