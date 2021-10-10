#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,a[1000];
for (i=1;i<=3;i++) cin>>a[i];
sort(a+1,a+1+3);
for (i=3;i>=1;i--) cout<<a[i]<<" ";
}
