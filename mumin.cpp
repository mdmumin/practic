#include<iostream>
using namespace std;
class fin{
    int i,flag=0;


public:
    void prime(int x)
    {
        for(i=2;i<=x/2;i++)
        {
            if(x%2==0)
            {
                flag=1;
                cout<<"not prime"<<"\n";
                break;
            }
        }
        if (flag==0)
        {
            cout<<"prime"<<"\n";
        }


    }
    void eo(int x)
    {
        if(x%2==0)
        {
            cout<<"even"<<"\n";
        }
        else
        {
            cout <<"odd"<<"\n";
        }
    }
    void pali(int x )
    {
        int n,y,m,s=0;
        m=x;
        while(x!=0)
        {
            n=x%10;
            s=s*10+n;
            x=x/10;


        }
        if(s==m)
        {
            cout<<"palindrome";

        }
        else
        {
            cout <<"not palindrome";
        }
    }






};
int main()
{
    fin ob1;
    int n;
    cin>>n;
    ob1.prime(n);
    ob1.eo(n);
    ob1.pali(n);
}
