#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        long long x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int ans=abs(x1-x2)+abs(y1-y2);
        if (x1==x2&&x2==x3)
        {
            if (y3<min(y1,y2)||y3>(max(y1,y2))) ans+=0;
            else ans+=2;
        }
        else if (y1==y2&&y2==y3)
        {
             if (x3<min(x1,x2)||x3>(max(x1,x2))) ans+=0;
            else ans+=2;
        }
        cout<<ans<<endl;
    }
}
