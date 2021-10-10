#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,k,k1;
    cin>>a>>b>>c;
    k=a/c;
    k1=b/c;
    if (k*c<a) k++;
    if (k1*c>b) k1--;
    cout<<k1-k+1<<endl;
}
