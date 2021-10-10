#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    for (i=int(sqrt(n));i>=1;i--) if (n%i==0) {cout<<(n/i+i)*2<<endl;break;}
}
