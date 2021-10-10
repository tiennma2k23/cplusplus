#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int h,m,a,b;
    cin>>h>>m>>a>>b;
    int cl=(b-a)+24;
    cout<<(h+cl)%24<<" "<<m<<endl;
}
