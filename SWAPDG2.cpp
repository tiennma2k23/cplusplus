#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,max2="00000000000000000000",min2="999999999999999999999",s1;
    int min1=1000,max1=-10,i,min3=1000,j;
    cin>>s;
    min2=s;max2=s;
    for (i=0;i<s.length();i++)
    {
            for (j=0;j<s.length();j++)
            {
                s1=s;
                if (s[j]!=s[i]) {swap(s1[i],s1[j]);if (s1[0]!='0') {min2=min(min2,s1);max2=max(max2,s1);}}
            }
    }
    cout<<min2<<" "<<max2<<endl;
}
