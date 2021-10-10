#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,c,t,dv,max1;
cin>>a;
t=a/100;c=(a-t*100)/10;dv=a%10;
max1=max(t,max(c,dv));
if (max1==t) cout<<t<<" "<<"TRAM"<<endl;
else if (max1==c) cout<<c<<" "<<"CHUC"<<endl;
else cout<<dv<<" "<<"DONVI"<<endl;
}
