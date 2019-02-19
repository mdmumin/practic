#include<iostream>
using namespace std;
class circle {
    int r;
    public:
        circle()
        {
            r=1;
        }
    circle(int a)
    {
     r=a;

    }
    float getArea()
    {
        cout <<"radius " <<r <<" & area ";
        float area=3.14159*r*r;
        return area;



    }




};
int main()
{
    circle ob1(2),ob2(12),ob3(24);
    cout<<ob1.getArea()<<"\n";
    cout<<ob2.getArea()<<"\n";
    cout<<ob3.getArea()<<"\n";


}
