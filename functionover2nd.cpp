/*2st way of function overloading..
different number with argument*/
#include<iostream>
#include<string>
using namespace std;

void add(int,int);
void add(int,int,int);
int main(){
  
    add(5,6);
    add(5,6,7);
    
    return 0;
}
void add(int x, int y)
{
cout<<"Sum is "<<x+y<<endl;
}
void add(int x, int y , int z)
{
cout<<"Sum is "<<x+y+z<<"\n";
}