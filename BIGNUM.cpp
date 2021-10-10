#include<bits/stdc++.h>
using namespace std;
string add(string a,string b)
{
    long long int sum=0,carry=0,i,x,y;
    string c="";
    while (a.length()<b.length()) a='0'+a;
    while (b.length()<a.length()) b='0'+b;
    for (i=a.length()-1;i>=0;i--)
    {
        x=int(a[i])-48;y=int(b[i])-48;
        sum=x+y+carry;
        carry=sum/10;
        c=char(sum%10+48)+c;
    }
    if (carry>0) c='1'+c;
    while (c.length()>1&&c[0]=='0') c.erase(c.begin());
    return c;
}
string tru(string a, string b)
{
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    bool check=false;
    if(a<b)
    {
        swap(a,b);
        check=true;
    }
    int borrow=0;
    for(int i=a.length()-1; i>=0;i--)
    {
        int tmp=a[i]-b[i]-borrow;
        if(tmp<0)
        {
            tmp+=10;
            borrow=1;
        }
        else borrow=0;
        res=(char)(tmp%10 + 48) + res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    if(check) res="-"+res;
    return res;
}
string nhansl(string a, string b)
{
    string res="";
    int n=a.length();
    int m=b.length();
    int length=n+m-1;
    int carry=0;
    for(int i=length;i>=0;i--)
    {
        int tmp=0;
        for(int j=n-1;j>=0;j--)
            if(i-j<=m && i-j>=1)
            {
                int a1=a[j]-48;
                int b1=b[i-j-1]-48;
                tmp+=a1*b1;
            }
            tmp+=carry;
            carry=tmp/10;
            res=(char)(tmp%10 + 48)+res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    return res;
}

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    cout<<tru(a,b)<<endl;
    cout<<nhansl(a,b)<<endl;
}
