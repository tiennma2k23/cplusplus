#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s,s4;
long long a[1000000],i,j,tmp,max1,vt1,vt2,k,k1,d,c;
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
    s4=s1;tmp=0;d=0;
    while (s4.length()>0)
    {
        tmp=tmp+s4[0]-'0';
        s4.erase(0,1);
        s3=to_string(tmp);
        d++;
        s3=s3+s4;
        if (s3==s2)
        {
            vt1=0;
            vt2=d-1;
            max1=d;
        }
        else if (s3.length()<s2.length()) break;
    }
    s4=s1;tmp=0;d=0;
    while (s4.length()>0)
    {
        tmp=tmp+s4[s4.length()-1]-'0';
        s4.erase(s4.length()-1,1);
        s3=to_string(tmp);
        d++;
        s3=s4+s3;
        if (s3==s2)
        {
            vt2=s4.length()-1;
            vt1=vt2-d+1;
            max1=d;
        }
        else if (s3.length()<s2.length()) break;
    }
    for (i=0;i<s2.length();i++)
    {
            if (s1[i]==s2[i])
            {
                k1=s2.length()-i,k=6;
                for (j=min(k,k1);j>=1;j--)
                    {
                        c=i+j+s1.length()-s2.length();
                        if (s1[c]==s2[i+j])
                        {
                            tmp=a[c-1]-a[i];
                            s3=to_string(tmp);
                            s=s2.substr(i+1,j-1);
                            if (s==s3)
                                {
                                    if (max1<c-i) max1=j,vt1=i+1,vt2=i+j+s1.length()-s2.length()-1;
                                    break;
                                }
                        }
                        else break;
                    }
            }
            else break;
    }
    cout<<vt1+1<<" "<<vt2+1<<endl;
}
