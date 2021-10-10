#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int q,x,i,j,kt,d,k,l;
string s,s1,s2,s3,s4,t;
cin>>s>>q;
t=s;
while(q--)
{
    d=0;kt=0;
    while (true)
    {
        cin>>x;
        d++;
        if (d==1) i=x;
        else if (d==2) j=x;
        else if (d==3) k=x;
        else if (d>3) {kt=1;break;}
    }
    if (kt==1)
    {
        if (i>j) cout<<"N"<<endl;
        else {
        s1=s.substr(i-1,j-i+1);s2=s.substr(k-1,j-i+1);s3=s.substr(j,s.length()-j);s4=t.substr(k-1,j-i+1);
        if (s1==s2) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
        cout<<s4<<" "<<s2<<endl;
        s=s4+s3;
        cout<<s<<endl;
        }
    }
    else
    {
        for (l=i;l<=j;l++)
        {
            if (int(s[l])<122) s[l]=char(int(s[l])+1);
            else s[l]='a';
        }
    }
}
}
