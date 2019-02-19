#include<iostream>
using namespace std;
class circle
 {
     public :

     int radius;
     circle(int r)
     {
         radius=r;
     }
     circle()
     {
         radius=1;
         cout<<"Default value for radius is : "<<radius<<endl<<endl;
     }
     int getarea()
     {
         float area;
         area=3.1416*radius*radius;
        return area;
     }


     void setRadius(int r)
     {


         radius=r;
         cout<<"change radius "<<r<<endl;


     }
      void show()
     {
         cout<<"radius of the circle : "<<radius<<endl;
         cout<<"Area of the circle : "<<getarea()<<endl<<endl;
     }



 };
 int main()
 {

     circle obj1(2),obj2(12),obj3(24),ob4;
     //obj1.getarea();
     //obj2.getarea();
     //obj3.getarea();

     obj1.show();
     obj2.show();
     obj3.show();
     obj2.setRadius(35);
     //obj2.getarea();
     obj2.show();
 }
