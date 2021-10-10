#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,n,a,d1=0,d2=0,vt1[100010],vt2[100010],i;
    cin>>q;
    while (q--)
    {
        d1=0;d2=0;
        cin>>n;
        for (i=1;i<=n;i++)
        {
            cin>>a;
            if (a%2==0)
            {
                d1++;
                vt1[d1]=i;
            }
            else
            {
                d2++;
                vt2[d2]=i;
            }
        }
        if (d1==0&&d2==1) cout<<-1<<endl;
        else if (d1>0) {cout<<1<<endl;cout<<vt1[1]<<endl;}
        else if (d2>1) {cout<<2<<endl;cout<<vt2[1]<<" "<<vt2[2]<<endl;}
    }
}
