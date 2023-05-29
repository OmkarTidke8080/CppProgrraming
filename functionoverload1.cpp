#include<iostream>
using namespace std;

class Demo
{
    public :

    int Addition(int No1, int No2) // Addition@2ii
    {
        cout<<"Addition of 2 integers"<<"\n";
        return No1 + No2;

    }
    float Addition(float No1 , float No2) // Addition@2ff
    {
        cout<<"Addition of 2 floats"<<"\n"; 
        return No1 + No2;
    }
    double Addition(double No1 , double No2) // addition@2dd
    {
        cout<<"ddition of 2 doubles"<<"\n";
        return No1 + No2;
    }
};

int main()
{
  Demo obj;
  int iRet = obj.Addition(10,11);
  cout<<"Addition of integers is : "<<iRet<<"\n";

  float fRet = obj.Addition(10.5,11.2);
  cout<<"Addition of flots is : "<<fRet<<"\n";

  double dRet = obj.Addition(1022,11);
  cout<<"Addition of doubles is : "<<dRet<<"\n";

    return 0;

}