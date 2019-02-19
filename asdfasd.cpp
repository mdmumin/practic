#include<iostream>
#include<cstring>
using namespace std;
class ame{
    string x;
public:
    ame()
    {
        x="";
    }
    ame(string a)
    {
        x=a;
    }
    void show()
    {
        cout<<x;
    }
    friend ame operator+(ame k,ame l);
        friend ame operator+(ame k,ame l);


};
ame operator+(ame k,ame l)
    {
        ame temp;
        temp.x=k.x+l.x;
        return temp;
    }

int main()
{
    ame a("nafiz "),b("nafiz"),c("nafiz"),d;
    d=a+b;
    d=d+c;
    d.show();
}
