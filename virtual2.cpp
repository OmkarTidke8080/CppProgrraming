#include<iostream>
using namespace std;

class Base
{
    public :
    int A,B;
     
      virtual void fun()  // 1000
     {
        cout<<"Inside fun"<<"\n";                   
     }
     virtual  void gun()  // 2000
     {
        cout<<"Inside gun"<<"\n";     
     }
    virtual  void sun()  //3000
     {
        cout<<"Inside sun"<<"\n";       
     }
};
class Derived : public Base
{
   public :       // redefinition - use of same  method names
   int X,Y;

   void fun()  // 4000
     {
        cout<<"Inside fun of derived"<<"\n";                   
     }
     void gun()  // 5000
     {
        cout<<"Inside gun of derived"<<"\n";        
     }
     void sun()  //6000
     {
        cout<<"Inside sun of derived"<<"\n";        
     }
};

int main()
{
    cout<<"size of base"<<sizeof(Base)<<"\n";
    cout<<"size of Derived"<<sizeof(Derived)<<"\n";

    Base *bp = new Derived;   // Up casting     // no casting
   // Derived *dp = new Derived;  // no casting

   // Base *bp1 = new Derived;  // Up casting (allowed)
   // Derived *dp1 = new Base;   // down casting  (Not allowed)
   //  dairy maap example for down casting 1 liter dudh mi ardha litre ,maap

     bp-> fun();
     bp-> gun();
     bp-> sun();
 
    return 0;

}