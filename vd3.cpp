#include<iostream>
using namespace std;
int main()
{
    long double n;
    cin>>n;
    int n1=n*100;int a=n1/10000;
    int b=100*(n-100*a)/5000;
    int c=100*(n-100*a-50*b)/2000;
    int d=100*(n-100*a-50*b-20*c)/1000;
    int e=100*(n-100*a-50*b-20*c-10*d)/500;
    int f=100*(n-100*a-50*b-20*c-10*d-5*e)/200;
    int g=100*(n-100*a-50*b-20*c-10*d-5*e-2*f)/100;
    int g1=100*(n-100*a-50*b-20*c-10*d-5*e-2*f-1*g)/50;
    int g2=100*(n-100*a-50*b-20*c-10*d-5*e-2*f-1*g-g1*0.5)/25;
    int g3=100*(n-100*a-50*b-20*c-10*d-5*e-2*f-1*g-g1*0.5-g2*0.25)/10;
    int g4=100*(n-100*a-50*b-20*c-10*d-5*e-2*f-1*g-g1*0.5-g2*0.25-g3*0.1)/5;
    int g5=100*(n-100*a-50*b-20*c-10*d-5*e-2*f-1*g-g1*0.5-g2*0.25-g3*0.1-g4*0.05);

    cout<<"NOTAS:"<<endl;
    cout<<a<<" nota(s) de R$ 100.00"<<endl;
    cout<<b<<" nota(s) de R$ 50.00"<<endl;
    cout<<c<<" nota(s) de R$ 20.00"<<endl;
    cout<<d<<" nota(s) de R$ 10.00"<<endl;
    cout<<e<<" nota(s) de R$ 5.00"<<endl;
    cout<<f<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<g<<" moeda(s) de R$ 1.00"<<endl;
    cout<<g1<<" moeda(s) de R$ 0.50"<<endl;
    cout<<g2<<" moeda(s) de R$ 0.25"<<endl;
    cout<<g3<<" moeda(s) de R$ 0.10"<<endl;
    cout<<g4<<" moeda(s) de R$ 0.05"<<endl;
    cout<<g5<<" moeda(s) de R$ 0.01"<<endl;
}
