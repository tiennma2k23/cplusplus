#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,s1;
    int a,b;
    cin>>s>>s1;
    if(s1=="0") cout<<1<<endl;
    else{
    s1='0'+s1;
    a=int(s[s.length()-1])-48;
    b=(int(s1[s1.length()-1])-48)+(int(s1[s1.length()-2])-48)*10;
        if (a==0||a==1||a==5||a==6) cout<<a<<endl;
        else if (b%4==1) cout<<a<<endl;
        else if (b%4==0)
        {
            if (a==2||a==4||a==8) cout<<6<<endl;
            else if (a==3||a==7||a==9) cout<<1<<endl;
        }
        else if (b%4==2)
        {
            if(a==2||a==8) cout<<4<<endl;
            else if(a==3||a==7) cout<<9<<endl;
            else if(a==4) cout<<6<<endl;
            else if (a==9) cout<<1<<endl;
        }
        else if(b%4==3)
        {
            if(a==2) cout<<8<<endl;
            else if (a==3) cout<<7<<endl;
            else if(a==4) cout<<4<<endl;
            else if (a==7) cout<<3<<endl;
            else if (a==8) cout<<2<<endl;
            else if (a==9) cout<<9<<endl;
        }
    }
}
