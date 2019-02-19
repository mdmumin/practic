#include<iostream>
using namespace std;
class squar
{
    int length;
public :
   int set_length(int a)
    {
        length=a;
        return length;
    }
    friend int area(squar obj);
};
 int area(squar obj)
    {


        return obj.length*obj.length;;
    }
int main()
{
    int q;
    squar obj;
    obj.set_length(5);
    q=area(obj);
    cout<<q;

}
