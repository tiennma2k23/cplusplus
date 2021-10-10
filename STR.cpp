#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,i;
    string s="";
    cin>>n>>m;
    for (i=1;i<=max(m,n);i++)
        s=s+char(min(m,n)+48);
    cout<<s<<endl;
}
