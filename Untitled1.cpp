
#include<iostream>
using namespace std;
class c1
{
    int x,y;
public:
    c1(){x=0;y=0;}
    c1(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
c1 operator+(c1 ob);
};
c1 c1::operator+(c1 ob)
{
    c1 temp;
    temp.x=x+ob.x;
    temp.y=y+ob.y;
}
int main()
{
    c1 ob1(10,20),ob2(12,13),ob3;
    ob3=ob1+ob2;
    ob3.print();
}
