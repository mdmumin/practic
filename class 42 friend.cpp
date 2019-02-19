#include<iostream>
using namespace std;
class f1
{
    int a,b,p,q;
    public :
    void set()
    {
        int s=10;
    }
    friend void example(f1 obj);
};

void example(f1 obj)
{
    obj.a=15;
    obj.b=20;
    cout<<obj.a<<obj.b;
}
int main()
{
    f1 obj;
    example(obj)
}
