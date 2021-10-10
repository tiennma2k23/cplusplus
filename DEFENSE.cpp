#include<bits/stdc++.h>
//#define double long long
#define double float
using namespace std;
int main()
{
    double xa,ya,xb,yb,vxa,vxb,vya,vyb;
    cin>>xa>>ya>>vxa>>vya;
    cin>>xb>>yb>>vxb>>vyb;
    //cout<<xa<<xb<<vxa<<vxb<<endl;
    //x;
    double ansx=-1;
    if (xa==xb) ansx=xa;
    else
    {
        if (vxa==0&&vxb==0)
        {
            cout<<-1<<endl;
            return 0;
        }
        if (xa<xb)
        {
            if (vxa>vxb)
            {
                double kc=xb-xa;
                double dv=vxa-vxb;
                if (dv==0)
                {
                    ansx=-1;
                }
                else{
                double tg=kc/dv;
                ansx=min(xa+vxa*tg,xb+vxb*tg);
                }
            }
        }
        else
        {
            if (vxa<vxb)
            {
                double kc=xa-xb;
                double dv=vxb-vxa;
                if (dv==0)
                {
                    ansx=-1;
                }
                else{
                double tg=kc/dv;
                ansx=min(xa+vxa*tg,xb+vxb*tg);
                }
            }
        }
    }

    //y
    double ansy=-1;
    if (ya==yb) ansy=ya;
    else
    {
        if (vya==0&&vyb==0)
        {
            cout<<-1<<endl;
            return 0;
        }
        if (ya<yb)
        {
            if (vya>vyb)
            {
                double kc=yb-ya;
                double dv=vya-vyb;
                if (dv==0)
                {
                    ansy=-1;
                }
                else{
                double tg=kc/dv;
                ansy=min(ya+vya*tg,yb+vyb*tg);
                }
            }
            //cerr<<ansy<<endl;
        }
        else
        {
            if (vya<vyb)
            {
                double kc=ya-yb;
                double dv=vyb-vya;
                if (dv==0)
                {
                    ansy=-1;
                }
                else{
                double tg=kc/dv;
                ansy=min(ya+vya*tg,yb+vyb*tg);
                }
            }
        }
    }
    cout.precision(4);
    if (ansx!=-1&&ansy!=-1)cout<<fixed<<ansx<<" "<<ansy<<endl;
    //cout<<ansx<<ansy<<endl;
    else cout<<-1<<endl;

}
