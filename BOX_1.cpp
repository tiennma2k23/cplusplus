#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,r,w,h;
    cin>>a>>b>>c>>w>>h;
    if (a>b) swap(a,b);
    if (a>c) swap(a,c);
    if (b,c) swap(b,c);
    //a cao
    d=2*a+2*b;
    r=c+2*a;
    if (max(d,r)<=max(w,h)&&min(d,r)<=min(w,h)) {cout<<"Yes"<<endl;return 0;}
    d=2*a+2*c;
    r=b+2*a;
    if (max(d,r)<=max(w,h)&&min(d,r)<=min(w,h)) {cout<<"Yes"<<endl;return 0;}
    //bcao
    d=2*b+2*c;
    r=a+2*b;
   if (max(d,r)<=max(w,h)&&min(d,r)<=min(w,h)) {cout<<"Yes"<<endl;return 0;}
    d=2*b+2*a;
    r=c+2*b;
    if (max(d,r)<=max(w,h)&&min(d,r)<=min(w,h)) {cout<<"Yes"<<endl;return 0;}
    //ccao
    d=2*c+2*a;
    r=2*c+b;
    if (max(d,r)<=max(w,h)&&min(d,r)<=min(w,h)) {cout<<"Yes"<<endl;return 0;}
    d=2*c+2*b;
    r=2*c+a;
    if (max(d,r)<=max(w,h)&&min(d,r)<=min(w,h)) {cout<<"Yes"<<endl;return 0;}
    if (a==b&&b==c&&max(w,h)>=a*5&&min(w,h)>=a*2) {cout<<"Yes"<<endl;return 0;}
    cout<<"No"<<endl;
}
