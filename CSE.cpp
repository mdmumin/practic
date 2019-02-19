#include<iostream>
using namespace std;
class cse
{
    int section;
    string name;
    public :
    cse(int x,string y)
    {
        section=x;
        name=y;

    }
    void display()
    {
        cout<<"section : "<<section<<endl;
        cout<<"name    : "<<name<<endl;
    }
};

int main()
{
    int section=02;
    string name="momin";


    cse obj(section,name);

    obj.display();
}
