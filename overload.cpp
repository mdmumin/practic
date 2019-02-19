#include<iostream>
using namespace std;
class number
{
    int x,y;
public:
    number( )
    {
        x=0;
        y=0;
    }
    number(int a,int b)
    {
        x=a;
        y=b;
    }
    void print( )
    {
       cout<<x<<" "<<y;
    }
    number operator > (number ob);
};

number number :: operator > (number ob)
{
    number temp;


    if(x>ob.x)
    {
     temp.x=x;
    }
    else
    {
        temp.x=ob.x;
    }


    if(y>ob.y)
    {
        temp.y=y;
    }
    else
    {
        temp.y=ob.y;
    }
return temp;
}

int main()
{
    number o1(10,15),o2(20,5),o3(13,25),o4;
    o4=o1>o2>o3;

    o4.print();
}
