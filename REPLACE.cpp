#include<bits/stdc++.h>
using namespace std;
vector<long long> a(1000000);
string s1,s2,s,s3,s4;
long long i,ans,max1=-1,j,vt1,vt2,tmp,d,t;
int main()
{
    cin>>s1>>s2;
    a[0]=int(s1[0])-48;
    for (i=1;i<s1.length();i++)
    {
        a[i]=a[i-1]+int(s1[i])-48;
    }
    s3=to_string(a[s1.length()-1]);
    if (s3==s2)
    {
            cout<<1<<" "<<s1.length()<<endl;
            exit(0);
    }
    if (s1==s2) {cout<<1<<" "<<1<<endl;exit(0);}
    s4=s1;d=0;t=0;
    while (s4.length()>0)
    {
        t=t+s4[0]-'0';
        s3=to_string(t);
        d++;
        s4.erase(0,1);
        if (s3+s4==s2)
        {
            max1=d;
            vt1=0;
            vt2=vt1+max1-1;
        }
    }
    if (max1!=-1) {cout<<vt1+1<<" "<<vt2+1<<endl;exit(0);}
    s4=s1;d=0;t=0;
    while (s4.length()>0)
    {
        t=t+s4[s4.length()-1]-'0';
        s3=to_string(t);
        d++;
        s4.erase(s4.length()-1,1);
        if (s4+s3==s2)
        {
            max1=d;
            vt2=s1.length()-1;
            vt1=vt2-max1+1;
        }
    }
    if (max1!=-1) {cout<<vt1+1<<" "<<vt2+1<<endl;exit(0);}
    for (i=0;i<s2.length();i++)
    {
        if (s1[i]==s2[i])
        {
            for (j=s2.length()-1;j>=i;j--)
            {
                if (s2[j]==s1[j+s1.length()-s2.length()])
                {
                    s=s2.substr(i+1,j-i-1);
                    tmp=a[j+s1.length()-s2.length()-1]-a[i];
                    s3=to_string(tmp);
                    if (s==s3)
                    {
                        ans=j-i-1;
                        if (max1<ans)
                        {
                            vt1=i+1;
                            vt2=s1.length()-s2.length()+j-1;
                            max1=ans;
                        }
                        break;
                    }
                    else if (s.length()>s3.length()) break;
                }
                else break;
            }
        }
        else break;
    }
    cout<<vt1+1<<" "<<vt2+1<<endl;
}
