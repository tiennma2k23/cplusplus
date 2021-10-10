#include<bits/stdc++.h>
using namespace std;
class Foo
{
public:
    string bar="H W";
    Foo(string bar ="H"){
        this->bar=bar;
    }
    Foo foo()
    {
        cout<<this->bar;
        return *this;
    }
};
int main ( int a,char **b)
{
    Foo f("bar");
    f.bar="foo bar";
    cout<<f.foo().bar;
}
