#include<iostream>
using namespace std;
class name
{
    int p,q;
   public:
    int area();
    name(int a,int b)
    {
        p=a;
        q=b;
    }

    int getValue()
    {
        return p;
    }
    int getValue1()
    {
        return q;
    }
};
 inline int call(name ob)
{
    return ob.getValue()*ob.getValue1();
}
int call1(name ob1)
{
    return ob1.getValue()+ob1.getValue1();

}
int main()
{
    int p,h;
    name obj(10,5);
    p=call(obj);
    h=call1(obj);

    cout<<p<<endl<<h;

}
