#include <bits/stdc++.h>
using namespace std;
int main(){
	long long g,v,x;
	cin>>g>>v;
	x=(g+4-sqrt(pow((g+4),2)-16*(g+v)))/ 4;
    cout<<x<<" "<<(g+v)/x;
}
