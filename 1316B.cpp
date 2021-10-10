#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,vt,i,q;
    string s,min1,s1,s2,s3;
    cin>>q;
    while (q--)
    {
        cin>>n;
        cin>>s;
        if (n==1) {cout<<s<<endl;cout<<1<<endl;}
        else if (n==2)
        {
            s1=s;
            reverse(s.begin(),s.end());
            if (s1>s) {cout<<s1<<endl;cout<<1<<endl;}
            else {cout<<s<<endl;cout<<2<<endl;}
        }
        else
            {
                vt=-1;
                min1=s;
                s1="";
                for (i=0;i<s.length()-1;i++)
                {
                    s1=s1+s[i];
                    if ((n-s1.length())%2==0) s2=s.substr(i+1,n-1)+s1;
                    else
                    {
                        s3=s1;
                        reverse(s3.begin(),s3.end());
                        s2=s.substr(i+1,n-1)+s3;
                    }
                    if (min1>s2) {vt=i;min1=s2;}
                }
                cout<<min1<<endl;
                cout<<vt+2<<endl;
            }
}
}
