#include<iostream>
using namespace std;

// parent class
 class Demo
 {
    public :
         int A,B;

          Demo()
         {
             A = 45;
             B = 78;
            cout<<"Inside Demo constructor"<<"\n";
         }
         ~Demo()
         {
            cout<<"Inside Demo Destructor"<<"\n";
         }
         void fun()
         {
            cout<<"Inside fun of Demo"<<"\n";
         }
 };
  // Child class
 class Hello //: public Demo   // class Hello extends Demo  // for Java
 {
     public :
     int X,Y;

     Hello()
     {
        X = 51;
        Y = 12;
        cout<<"Inside Hello constructor"<<"\n";
     }
     ~Hello()
     {
        cout<<"Inside Hello destructor"<<"\n";
     }

     void gun()
     {
        cout<<"Inside gun of Hello"<<"\n";
     }
 };

 class PPA : public Hello,  public Demo
 {
    public :
    int I,J;
    PPA ()
    {
        I = 111;
        J = 222;
        cout<<"Inside PPa Constructir"<<"\n";
    }
    ~PPA ()
    {
        I = 111;
        J =222;
        cout<<"Inside PPa destructir"<<"\n";       
    }
    void sun()
    {
        cout<<"Inise Sun of ppa"<<"\n";
    }
 };
 
int main()
{
   cout<<"Inside main"<<"\n";

   cout<<"Size of demo : "<<sizeof(Demo)<<"\n";
   cout<<"Size of Hello : "<<sizeof(Demo)<<"\n";
   cout<<"Size of PPa : "<<sizeof(Demo)<<"\n";
 
    PPA pobj;

    pobj.fun();
    pobj.gun();
    pobj.sun();

    cout<<pobj.A<<"\n";
    cout<<pobj.B<<"\n";
    cout<<pobj.X<<"\n";
    cout<<pobj.Y<<"\n";
    cout<<pobj.I<<"\n";
    cout<<pobj.J<<"\n";

   cout<<"End of main"<<"\n";

    return 0;
}