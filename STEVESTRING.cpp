
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        string s;
        bool ck=true;
        cin>>s;
        while (ck){
        ck=false;
        for (int i=0;i<s.length()-1;i++)
            if (s[i]!=s[i+1])
            {
                ck=true;
                char ch1=s[i],ch2=s[i+1];
                if (ch1>ch2) swap(ch1,ch2);
                //cerr<<ch1<<" "<<ch2<<endl;
                if (ch1=='a')
                {
                    if (ch2=='b') s[i]='c';
                    else s[i]='b';
                }
                else if (ch1=='b') s[i]='a';
                s.erase(i+1,1);
                break;
            }
        }
        cout<<s.length()<<endl;
    }
}
