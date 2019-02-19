#include<iostream>
using namespace std;
class A
{
    int x;
    void showA()
    {
        cout<<"value of a is ";
    }
    public :
  A()
  {
      x=10;
  }
  friend class B;
};
class B
{
    public :
 void call(A obj)
 {
     obj.x=20;
     cout<<obj.x;
 }
};
int main()
{
    A obj;
    B obj1;
    obj1.call(obj);

}
