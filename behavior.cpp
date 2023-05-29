#include<iostream>
using namespace std;

class Demo
{

    public :
    int A , B; // Non static characterictics
    static int X, Y;  // static charactristics

    Demo() // default constructor
    {
        A = 0;
        B = 0;
    };
    void fun() // void func( Demo *this)
    {
        cout<<"Inside non sttic function fun"<<"\n";
        cout<<"Value of A : "<<this ->A<<"\n";
        cout<<"Value of A : "<<this ->B<<"\n";
        cout<<"value of X : "<<X<<"\n";
        cout<<"value of Y : "<<Y<<"\n";

    }
    static  void gun() //static void gun()
    { 
        cout<<"Inside static function gun"<<"\n";
        cout<<"value of X"<<"X"<<"\n";
        cout<<"value of Y"<<"Y"<<"\n";


    }
};
// initialisation os static charactristics
int Demo :: X = 10;  // bank saving account example (static)
int Demo :: Y = 20;    // fd account interest (non static)

int main()
{
     Demo :: gun();
     Demo obj1;

     obj1.fun();  // fun(&obj);

     obj1.gun(); // please avoid




  



    return 0;

}
