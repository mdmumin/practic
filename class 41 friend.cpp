#include<iostream>
using namespace std;
class f1{
int p,q;
int r,s;
public:
    void set(){
    int s=10;
    }
friend void example(f1 obj);
friend class f2;
};
void example(f1 obj){
obj.p=10;
obj.q=20;
cout<<obj.p<<obj.q<<"\n";
}
class f2{
int p,q;
public:
    int rec(f1 obj){
    obj.r=10;
    obj.s=20;
    return obj.r*obj.s;
    }
};
int main(){
f2 obj;
f1 obj1;
obj.rec(obj1);
cout<<obj.rec(obj1)<<"\n";
example(obj1);
}



