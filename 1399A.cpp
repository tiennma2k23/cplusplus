#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tv,q,b[10000],j;
    bool ck;
    cin>>tv;
    while (tv--)
    {
        cin>>q;
        for (j=1;j<=q;j++) cin>>b[j];
        sort(b+1,b+1+q);
        ck=true;
        for (j=1;j<q;j++)
        {
            if (b[j+1]-b[j]>1) {ck=false;break;}
        }
        if (ck) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
//My name is Tien
