#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a == 0) {
        if(b == 0) {
            if (c == 0) {
                cout << "unlimited" << endl;
            } else {
                cout << "-1" << endl;
            }
        } else {
            cout<<(double)(-c/b) << endl;
        }
    } else {
        double delta = (double)(b*b - 4*a*c);
        if(delta > 0) {
            double x1 = (double)(-b+sqrt(delta))/(2*a);
            double x2 = (double)(-b-sqrt(delta))/(2*a);
            cout << x2 << " "<<x1<<endl;
        } else if ( delta == 0) {
            cout << -b/2*a << endl;
        } else {
            cout << "-1" << endl;
        }
    }
}
