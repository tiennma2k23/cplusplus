#include<iostream>
using namespace std;
int main()
{
    double n;
    cin>>n;
    int n1=(int)(n*100);
    int n2=n1/100,n3=n1%100;
    int a=n2/100,a1=(n2-a*100)/50,a2=(n2-a*100-a1*50)/20,a3=(n2-a*100-a1*50-a2*20)/10,
        a4=(n2-a*100-a1*50-a2*20-a3*10)/5,a5=(n2-a*100-a1*50-a2*20-a3*10-a4*5)/2;
    cout<<"NOTAS:"<<endl;
    cout<<a<<" nota(s) de R$ 100.00"<<endl;
    cout<<a1<<" nota(s) de R$ 50.00"<<endl;
    cout<<a2<<" nota(s) de R$ 25.00"<<endl;
    cout<<a3<<" nota(s) de R$ 10.00"<<endl;
    cout<<a4<<" nota(s) de R$ 5.00"<<endl;
    cout<<a5<<" nota(s) de R$ 2.00"<<endl;
    int b=(n2-a*100-a1*50-a2*20-a3*10-a4*5-a5*2),
        b1=(n3/50),b2=(n3-b1*50)/25,b3=(n3-b1*50-b2*25)/10,b4=(n3-b1*50-b2*25-b3*10)/5,
        b5=(n3-b1*50-b2*25-b3*10-b4*5);
    cout<<"MOEDAS:"<<endl;
    cout<<b<<" moeda(s) de R$ 1.00"<<endl;
    cout<<b1<<" moeda(s) de R$ 0.50"<<endl;
    cout<<b2<<" moeda(s) de R$ 0.25"<<endl;
    cout<<b3<<" moeda(s) de R$ 0.10"<<endl;
    cout<<b4<<" moeda(s) de R$ 0.05"<<endl;
    cout<<b5<<" moeda(s) de R$ 0.01"<<endl;


}
