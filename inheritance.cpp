#include<iostream>
using namespace std;

class number
{
    int x,y;
public :
    int setx(int p,int q)
    {
        x=p;
        y=q;

    }
    void printx( )
    {
        cout<<x<<" "<<y<<endl;
    }
};


class number1 :private number
{
    int a,b;
public :
    //int all(){setx(5,6);
    //printx(); }
    int sety(int d,int f)
    {
        setx(5,6);
        printx();
        a=d;
        b=f;
    }
    void printy( )
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    number1 obj;
    obj.sety(10,20);
    obj.printy();
    //obj.sety(8,7);
    //obj.printy();
    //obj.all();
}

