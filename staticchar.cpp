#include<iostream>
using namespace std;

class Demo
{

    public :
    int A , B; // Non static characterictics
    static int x, y;  // static charactristics

    Demo() // default constructor
    {
        A = 0;
        B = 0;
    };
};
// initialisation os static charactristics
int Demo :: x = 10;  // bank saving account example (static)
int Demo :: y = 20;    // fd account interest (non static)

int main()
{
    cout<<"value of x : "<<Demo ::x<<"\n";
    cout<<"Value of Y : "<<Demo ::y<<"\n";

   Demo obj1;
   Demo obj2;

    cout<<"value of A : "<<obj1.A<<"\n";
    cout<<"Value of B : "<<obj2.A<<"\n";
    
    obj1.A++;
    cout<<"value of A : "<<obj1.A<<"\n";
    cout<<"Value of B : "<<obj2.A<<"\n";

   cout<<"size of demo class object is : "<< sizeof(obj1)<<"\n";

  



    return 0;

}
