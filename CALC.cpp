
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int a[5];
    for (int i=1;i<=2;i++){
    cin>>a[1]>>a[2]>>a[3];
    sort(a+1,a+4);
    if (a[1]+a[2]==a[3]) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    }
}
