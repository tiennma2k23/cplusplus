#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,tmp;
    long long int res;
    cin>>a>>b;
    tmp=b*log10(a);
    res=(long long int)tmp+1;
    cout<<res<<endl;
}
