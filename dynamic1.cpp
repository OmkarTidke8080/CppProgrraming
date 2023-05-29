#include<iostream>
using namespace std;

class Demo
{
    public :
    
    int A,B;
    Demo()
    {
        cout<<"Inside Defaulrt constructior"<<"\n";
        
    }
    Demo(int i , int j)
    {
        cout<<"Inside parameterised constructor"<<"\n";

    }
    ~Demo()
    {
    
       cout <<"Inside destructor"<<"\n";
    }
};

int main()
{
    cout<<"Inside main"<<"\n";

    Demo obj();
    Demo obj1(11,21);

 Demo *p = new Demo();
 Demo *q  = new Demo(11,21);

 delete p;
 delete q;

  cout<<"End of main"<<"\n";


    return 0;
}