#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q;
    ios_base::sync_with_stdio(false);
  	cin.tie(0);
  	cout.tie(0);
    cin>>q;
    while(q--)
    {
        string s;
        long long d[10]={0},i,k,dem=0,l;
        cin>>s;
        if(s[0]=='-')
        {
            s.erase(s.begin()+0);
        }
        if(s.length()==1)
        {
            if( (int(s[0])-48)%8==0 )
            {
            s='0'+s;
            s='0'+s;
            }
        }
        if(s.length()==2)
        {
            if( (((int(s[0])-48))*10+int(s[1]-48))%8==0 || (((int(s[1])-48))*10+int(s[0]-48))%8==0)
            s='0'+s;
        }
        l=s.length();
        for(i=0;i<l;i++)
        {
            d[s[i]-48]++;
        }
        for(k=0;k<=992;k=k+8)
        {
            long long x,y,z;
            long long d1[10],duongcute=0;
            d1[0]=d[0];d1[1]=d[1];d1[2]=d[2];d1[3]=d[3];d1[4]=d[4];d1[5]=d[5];d1[6]=d[6];d1[7]=d[7];d1[8]=d[8];d1[9]=d[9];
            x=k/100;
            y=(k%100)/10;
            z=k%10;
            if(d1[x]!=0)
            {
                d1[x]--;
                if(d1[y]!=0)
                {
                    d1[y]--;
                    if(d1[z]!=0)
                    {
                        duongcute=1;
                    }
                }
            }
            if(duongcute==1){dem=-1711;break;}
            if(duongcute==0){dem++;}
        }
        if(dem==125)
        {
            cout<<"NO"<<endl;
        }
        if(dem==-1711)
        {
            cout<<"YES"<<endl;
        }

    }
}
