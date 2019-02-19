#include<iostream>
using namespace std;

class mumin
{
    int a,b,e;
    public:
  void show()
  {
      cout<<a<<' '<<b<<endl;

      cout<<e<<endl;


  }
  int value(int x,int y)
  {
      a=x;
      b=y;
      e=a+b;
  }


};
 int main()
 {
     mumin obj1,obj2;
     obj1.value(10,15);
     obj2=obj1;
     obj2.show();
     obj1.show();
 }
