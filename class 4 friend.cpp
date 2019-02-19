#include<iostream>
using namespace std;
class f1{
      int p,q;
      int height,width;
public:
      friend void example();
      friend class f2;

};
class f2{
      int p,q;
public:
      int rect(int x,int y)
      {
            f1 obj;
            obj.height = x;
            obj.width = y;
            return obj.height*obj.width;
      }
};
      void example()
      {
            f1 obj;
            int x,y;
            cin>>x>>y;
            obj.p=x;
            obj.q=y;
            cout<<obj.p<<"\n"<<obj.q<<"\n";
      }
      int main()
      {
            f1 obj;
            f2 obj1;
            int rec,a,b;
            cin>>a>>b;
            rec =obj1.rect(a,b);
            cout<<"The Rectangular area is: "<<rec<<"\n";
            example();

      }
