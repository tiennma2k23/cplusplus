#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,x,y,a,b,i;
    char ch;
    while (true)
    {
        bool c1=false,c2=false,d=false,n=false;
        cin>>q;
        if (q!=-1)
        {
            cin>>x>>y;
            for (i=1;i<=q;i++)
            {
                cin>>ch>>a>>b;
                if (ch=='R')
                {
                    if (a==x) d=true;
                    else if (b==y) n=true;
                }
                if (ch=='B')
                {
                    if (abs(x-a)==abs(y-b))
                    {
                        if ((x>a&&y<b)||(x<a&&y>b)) c1=true;
                        else if ((x<a&&y<b)||(x>a&&y>b)) c2=true;
                    }
                }
                if (ch=='G')
                {
                    if (a==x) d=true;
                    else if (b==y) n=true;
                    if (abs(x-a)==abs(y-b))
                    {
                        if ((x>a&&y<b)||(x<a&&y>b)) c1=true;
                        else if ((x<a&&y<b)||(x>a&&y>b)) c2=true;
                    }
                }
            }
            if (c1&&c2&&d&&n) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else break;
    }
}
