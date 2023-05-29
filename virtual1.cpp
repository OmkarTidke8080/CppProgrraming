#include<iostream>
using namespace std;

class Base
{
    public :
    int A,B;
     
     void fun()  // 1000
     {
        cout<<"Inside fun"<<"\n";
                     
     }
     void gun()  // 2000
     {
        cout<<"Inside gun"<<"\n";
        
     }
     void sun()  //3000
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
    Base *bp = new Base;      // no casting
    Derived *dp = new Derived;  // no casting


    Base *bp1 = new Derived;  // Up casting (allowed)
   // Derived *dp1 = new Base;   // down casting  (Not allowed)
   //  dairy maap example for down casting 1 liter dudh mi ardha litre ,maap

   
    return 0;

}