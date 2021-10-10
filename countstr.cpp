#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int i,d=0,j;
    cin>>s;
    for (i=0;i<s.length()-1;i++)
    {
            long long int dem[1000]={0};
            dem[int(s[i])]=1;
            for (j=i+1;j<s.length();j++)
            {
                if(s[j]!=s[i])
                {
                    if (dem[int(s[j])]==0) {d++;dem[int(s[j])]++;}
                }
                else break;
            }
    }
    cout<<d<<endl;
}
