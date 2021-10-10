#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll x, ll y,ll z)
{
    if ((y==1||y==3||y==5||y==7||y==8||y==10||y==12)&&(x>0&&x<=31)) return true;
    else if (y==2)
    {
        if (z%4==0&&x>0&&x<30) return true;
        else if (z%4!=0&&x>0&&x<29) return true;
    }
    else if ((y==4||y==6||y==9||y==11)&&(x>0&&x<31)) return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll y1,d1,t1,y,n,t,d,k2,k1;
    string s;
    bool kt;
    cin>>n;
    while (n--)
    {
        cin>>s;
        kt=false;

        d=(s[0]-'0')*10+s[1]-'0';
        t=(s[3]-'0')*10+s[4]-'0';
        y=(s[6]-'0')*1000+(s[7]-'0')*100+(s[8]-'0')*10+s[9]-'0';
        d1=(s[9]-'0')*10+s[8]-'0';
        t1=(s[7]-'0')*10+s[6]-'0';
        if (((d1>d&&t1>=t)||(t1>t))&&(check(d1,t1,y)))
        {
            if (d1<10) cout<<"0"<<d1<<".";
            else cout<<d1<<".";
            if (t1<10) cout<<"0"<<t1<<".";
            else cout<<t1<<".";
            cout<<s[6]<<s[7]<<s[8]<<s[9]<<"."<<endl;
            return 0;
        }

            while (!kt)
            {
                y1=y+1;
                k1=y1%100;
                k2=y1/100;
                d1=(k1%10)*10+k1/10;
                t1=(k2%10)*10+k2/10;
                if (check(d1,t1,y1))
                {
                    if (d1<10) cout<<"0"<<d1<<".";
                    else cout<<d1<<".";
                    if (t1<10) cout<<"0"<<t1<<".";
                    else cout<<t1<<".";
                    if (y1<10) cout<<"000"<<y1<<"."<<endl;
                    else if (y1<100) cout<<"00"<<y1<<"."<<endl;
                    else if (y1<1000) cout<<"0"<<y1<<"."<<endl;
                    else cout<<y1<<"."<<endl;
                    kt=true;
                }
                else y=y1;
            }
        }
}
