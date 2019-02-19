#include<iostream>
using namespace std;

class bubt
{
    public :
   string a,b;
   long int c,d;

   void show(string p,long int q,string r,int s)
   {
       a=p;
       c=q;
       b=r;
       d=s;
   }
   void mumin()
   {
              cout<<"  Name : "<<a<<endl;
       cout<<"    ID : "<<c<<endl;
       cout<<"Subject: "<<b<<endl;
       cout<<" Intake: "<<d<<endl;
   }
};
bubt call(bubt obj)
{
    string e,f;
   long long int g,h;

 getline(cin, e);
    cin>>g;
    cin>>f;
    cin>>h;
    obj.show(e,g,f,h);
    return obj;
}
int main()
{
    bubt ob;
    ob=call(ob);
    ob.mumin();
}
