#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x1,x2,y1,y2,t;
    cin>>n;
    cin>>x1>>y1>>x2>>y2;
    if (abs(x1-x2)%2==abs(y2-y1)%2) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
