#include<iostream>
using namespace std;

class bubt
{
    public :
   string a,b;
   long int c,d;
   bubt(string p,long int q,string r,int s)
   {
       a=p;
       c=q;
       b=r;
       d=s;
   }
   void show()
   {
       cout<<"Name   : "<<a<<endl;
       cout<<"ID     : "<<c<<endl;
       cout<<"Subject: "<<b<<endl;
       cout<<"Intake : "<<d<<endl;
          }
};
bubt call()
{
    string e,f;
    long long int g,h;

    getline(cin, e);

    cin>>g;
    cin>>f;
    cin>>h;
    bubt obj(e,g,f,h);
    return obj;
}
int main()
{
    bubt obj1=call();
    obj1.show();
}
