#include<iostream>
using namespace std;
// costant function is such a function which cannot change the value of its caller object
class Demo 
 {
    public :
    int A;
    int B;
    const int C;
    const int D;
   
    Demo() : C(11), D(21)  // member initialisation list
    {
      A = 0;
      B = 0;

    }
    Demo(int i, int j, int k, int l) : C(k), D(l)
    {
        A = i;
        B = j;

    }
    void fun()
    {
       A++;   // A
       B++;   //A
 //      C++;  // NA
 //      D++;  //NA
    }

    const void gun()
    {
      A++;  //na
      B++; //  NA
   //   C++; //NA
   //   D++; // N   
    }

 };
int main()
{
    

   
   
return 0;
}