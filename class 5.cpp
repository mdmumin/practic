#include<iostream>
using namespace std;
class student
{
public :
    int intk;
    char sec;
   void setVal(int p,char q)
    {
        intk=p;
        sec=q;
        cout<<"intake :"<<intk<<endl<<"sec :"<<sec;
    }

};

student setVale(student obj){


obj.setVal(35,'5');



}
int main()
{
    student st;

    st=setVale(st);
}
