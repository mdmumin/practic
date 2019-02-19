#include<iostream>
using namespace std;

class f1
{

    int x,y;
    public:

    int getvalu(int k)
    {
        cout<<"hello"<<endl;
        x=k;
    }
    ~f1()
    {
        cout<<"destructor"<<endl;
    }
    void show()
    {
        cout<<x<<endl;
    }
};
f1 getValue1()
{
    f1 obj;
    int p;
    cin>>p;
    obj.getvalu(p);
    return obj;
}
int main()
{

    f1 obj;
 obj=getValue1();
    obj.show();
}
