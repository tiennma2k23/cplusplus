#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
    long long int n,q,i,d[100000],odd,l,r;
    char ch;
    string s,s1,s2,s3,s4;
    cin>>n>>q;
    cin>>s;
    while(q--)
    {
        s1="";s2="";s3="";
        cin>>l>>r;
        long long int odd=0,d[100000]={0};
        for (i=l-1;i<r;i++) d[int(s[i])]++;
        for (char ch='a';ch<='z';ch++) if (d[int(ch)]%2!=0) { odd++;if (odd>1) break;}
        if(odd <= 1){
            string s1 = "", s2 = "";
            for (char ch='a';ch<='z';ch++)
                {
                    for (i=1;i<=d[int(ch)]/2;i++) s1=s1+ch;
                    if (d[int(ch)]%2!=0) s2=ch;
                }
            for (i=s1.length()-1;i>=0;i--) s3+=s1[i];
            s1=s1+s2+s3;
            s.replace(l-1,r-l+1,s1);
        }
    }
    cout<<s<<endl;
}
