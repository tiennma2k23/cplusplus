#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x1,y2,x2,y1;
    cin>>x1>>y1>>x2>>y2;
    long long ans=(abs(x1-x2)*abs(y1-y2));
    cout<<ans<<endl;
}
