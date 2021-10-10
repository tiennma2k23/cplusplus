#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,q,x,y,d,i,t;
char ch;
string s;
cin>>n>>q;
cin>>s;
while (q--)
{
    cin>>t>>x;
    if (t==1)
    {
        cin>>ch;
        s[x-1]=ch;
    }
    else
    {
        cin>>y;
        x--;y--;
        if ((y-x+1)%2==1) cout<<"NO"<<endl;
        else
            {
                d=0;
                for (i=x;i<=y;i++)
                    {
                        if (s[i]=='(') d++;
                        else d--;
                        if (d<0) {break;}
                    }
        if (d==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }
}
}
