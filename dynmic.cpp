#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
  int Arr[5];  // Static memory alloctaion

  int *p = NULL;
  p = (int *)malloc(5 * sizeof(int));  // dynamic alloction using malloc
  
  int *q = NULL;
  q = (int *)calloc(5, sizeof(int));  // Dynamic allocation using Calloc

int *X = NULL;
X = new int[5]; // new operator automatically calls the malloc 


free(p);
free(q);

delete [] X;  //  C++ syntax //  deletes whole array

    return 0;
}
