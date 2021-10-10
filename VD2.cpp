#include<iostream>
using namespace std;
int main()
{
    string a;
    cin >> a;
    double b,c;
    cin >> b;
    cin >> c;
    cout.precision(2);
    cout <<fixed<< "TOTAL = R$ "<<b+c*15/100<<endl;
}
