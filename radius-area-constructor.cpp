#include<iostream>
using namespace std;
class myclass
{
    int radius;
public:
    myclass(int a)
    {
        radius=a;
    }
    void print()
    {
        cout<<"Radius of the circle is= "<<radius<<endl;
    }
    float area(int r)
    {
        float Area;
        Area=3.1416*r*r;
        return Area;
    }
};
int main()
{
    myclass ob1(2),ob2(12),ob3(24);
    ob1.print();
    ob2.print();
    ob3.print();
    cout<<"Area of the circle is: "<<ob1.area(2)<<endl;
    cout<<"Area of the circle is: "<<ob2.area(12)<<endl;
    cout<<"Area of the circle is: "<<ob3.area(24);
}
