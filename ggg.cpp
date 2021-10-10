#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q,i,d[10000],odd,l,r;
    char ch;
    string s,s1,s2,s3,s4;
    cin>>n>>q;
    cin>>s;
    while(q--)
    {
        s1="";s2="";s3="";
        cin>>l>>r;
        long long int odd=0;
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

        }
        s = s.substr(0 , l - 1) + s1 + s.substr(r , s.length() - r );
        cout<<s<<endl;
    }
    cout<<s<<endl;
}
