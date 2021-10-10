#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=3e5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        string s="";
        cin>>s;
        ll i;
        string s1=s;
        bool kt=true;
        while (kt&&s1.length()>0)
        {
            bool ck1=false;
            //ck2=ck1;
            i=0;
            string s2="";
            while (i<s1.length())
            {
                if (s1[i]=='A'&&s1[i+1]=='B')
                {
                    ck1=true;
                    i+=2;
                }
                else s2+=s1[i],i++;
            }

            if (!ck1)
            {
                s2="";
                i=0;
                while (i<s1.length())
                {
                    if (s1[i]=='B'&&s1[i+1]=='B')
                    {
                        ck1=true;
                        i+=2;
                    }
                    else s2+=s1[i],i++;
                }
            }
            if (ck1) s1=s2;
            kt=ck1;
        }
        cout<<s1.length()<<endl;
    }
}
