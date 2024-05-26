/*1st way of function overloading..
different datatype with argument*/
#include<iostream>
#include<string>
using namespace std;

void add(int,int);
void add(float,float);
void add(string,string);
int main(){
  
    add(5,6);
    add(5.6f,10.5f);
    add("Aayush" , "Gupta");
    return 0;
}
void add(int x, int y)
{
cout<<"Sum is "<<x+y<<endl;
}
void add(float x, float y)
{
cout<<"Sum is "<<x+y<<"\n";
}
void add(string x, string y)
{
cout<<"Sum is "<<x+y;
}