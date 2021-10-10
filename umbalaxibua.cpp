#include <iostream>
#include <string>
using namespace std;
int main() {
	long long n,i,k,kq;
	string s,s1,s2;
	cin >> s;
	n=s.length();
	i=n-1;
	s1="";
	while(i>=0){
		k=i+1;
		s2=to_string(k);
		if(s[i]=='l')
		    s1=s1+s2+' ';
		else
		    s1=s2+' '+s1;
		i--;
	}
	while(s1[s1.length()]==' ')
	    s1.erase(s1.length(),1);
     	cout << s1;

	return 0;
}
