#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,l,r,tmp;
    cin>>t;
    while (t--)
    {
        cin>>l>>r;
        tmp=r/l;
        if (tmp!=1) cout<<l<<" "<<l*tmp<<endl;
        else cout<<-1<<" "<<-1<<endl;
    }
}
