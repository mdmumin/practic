#include<iostream>
using namespace std;
class mumin
{
    int a,b;
public :
    mumin(int x,int y)
    {
        a=x;
        b=y;
    }

    friend int getValue(mumin obj);
};
int getValue(mumin obj)
{
    int star;
    star=obj.a*obj.b;

    return star;
}

int main()
{
    int p,q,g;
    cin>>p>>q;
    mumin obj(p,q);
    //obj.mumin(p,q);
    g=getValue(obj);
    cout<<g;
}
