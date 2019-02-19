#include<iostream>
using namespace std;
class number
{
    int x,y;
public :
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
    number operator +(number ob);

};

 number number:: operator+(number ob)

    {
        number temp;
        temp.y=y+ob.y;
        temp.x=x+ob.x;
        return temp;
    }

int main()
{
    number n1(7,5), n2(8,6),n3;
    n3=n1+n2;
    n3.print();
}

