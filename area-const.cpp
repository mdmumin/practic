#include<iostream>
using namespace std;
class circle
{
    int radius;
public:
    circle(int r)
    {
        radius=r;
    }
    float getArea(int r)
    {
       cout<<"Radius of the circle is:"<<radius<<endl;
       float area;
       area=3.1416*r*r;
       cout<<"Area of the circle is= "<<area<<endl;
       if(r==12)
       {
       	r=35;
       	area=3.1416*r*r;
       	cout<<"Changed radius for 12 is:"<<r<<endl;
        cout<<"Area of the circle of radius 35 is= "<<area<<endl;
	   }
    }
};
int main()
{
    circle ob(2),ob1(12),ob2(24);
    ob.getArea(2);
    ob1.getArea(12);
    ob2.getArea(24);
}
