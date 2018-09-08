//This is a simple program to understand the internals of 
//C Run time memory/Activation stack and how it works
//How the variables are laid out in the memory
//Testos
#include <iostream>
#include <stdio.h>
using namespace std;
void foo1(void);
void foo2(void);
main()
{
foo1();
foo2();
}
void foo1()
{
float x,y;
x=10.0;
y=5.0;
}
void foo2()
{
float b;
float a;

cout<<a<<"\n";
cout<<b<<"\n";
}
