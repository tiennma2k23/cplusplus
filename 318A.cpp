#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,k;
cin>>n>>k;
if (n%2==1) n++;
if (n/2>=k) cout<<k*2-1<<endl;
else cout<<(k-n/2)*2<<endl;
}
