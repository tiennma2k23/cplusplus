
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    cin>>a[1]>>a[2]>>a[3];
    sort(a+1,a+4);
    if (a[1]+a[2]==a[3]) cout<<1<<endl;
    else cout<<0<<endl;
}
