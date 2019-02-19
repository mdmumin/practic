#include<iostream>
using namespace std;
class student{
    public:
    int  k;
    char sec;
 void setval(int x,char p)
  {
      k=x;
      sec=p;
  }
  void show()
  {
      cout<<"intake: "<<k<<"\n";
      cout<<"sec: "<<sec<<"\n";
  }
  ~student()
  {
      cout<<"distructor";
  }

};
    student setValu(student ob)
    {
        ob.setval(35,'5');
        return ob;
    }
    int main()
    {
        student st;
        st=setValu(st);
        st.show();
    }

