#include<iostream>
using namespace std;
class f1{
    string x;
public:
    f1()
    {

    }
    f1(string y)
    {
        x=y;
    }
    f1 operator + (f1 obj)
    {
       f1 temp;
     temp.x= x+obj.x;
     return temp;
    }
    void show()
    {
        cout<<x;
    }

};
int main()
{
    f1 obj("tasniya"),obj1("jahan"),obj2("oishi"),ob3(" "),ob;
    ob=obj+ob3+obj1+ob3+obj2;
    ob.show();
}


