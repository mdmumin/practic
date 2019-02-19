
#include<iostream>
using namespace std;



class f{
    int x,y;
public:
    void fu(int p,int q)
    {
        x=p;
          y=q;
    }
    void sho()
    {
        cout<<x<<" "<<y;
    }

};
class f1 :virtual public f{
    int x,y;
public:
    void fun(int p,int q)
    {
        x=p;
          y=q;
    }
    void show()
    {
        cout<<x<<" "<<y;
    }

};
class f2 :virtual public f {
    int x,y;
public:
    void fun1(int p,int q)
    {
        x=p;
          y=q;
    }
    void show1()
    {
        cout<<x<<" "<<y;
    }

};
class f3 :public f2,public f1{
    int x,y;
public:
    void fun2(int p,int q)
    {
        x=p;
          y=q;
    }
    void show2()
    {
        cout<<x<<" "<<y;
    }

};
int main()
{
   f3 obj;
   obj.fu(34,56);
   obj.fun(10,20) ;
   obj.fun1(30,40);
   obj.fun2(50,60);
   obj.sho();
   obj.show();
   obj.show1();
    obj.show2();

}


