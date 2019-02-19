#include<iostream>
using namespace std;
class First
{
    int n,m;
    public :
    First(int x,int y)
    {
        m=x;
        n=y;
    }
    int getVariable()
    {
        return m;
    }
    int getVariable1()
    {
        return n;
    }
};
 int calcu(First ob1)
 {
     int q;
     float p;
     q=ob1.getVariable()-ob1.getVariable1();
     cout<<"sum = "<<q<<endl<<endl;
     p=(float)ob1.getVariable()/ob1.getVariable1();
     cout<<"multi = "<<p<<endl;
 }

int main()
{
    int a,b,p,q;
    cin>>a>>b;
    First ob1(a,b);

    calcu(ob1);

}
