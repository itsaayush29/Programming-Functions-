#include <iostream>
using namespace std;

int fun(int, int);          //declaration

int main()
{
    int a, b, c;                          
    cout << "enter the nuber :";
    cin >> a >> b;
    fun(a, b);                //calling
    return 0;
}
int fun(int x, int y)            //body
{
    if (x > y)
    {
        cout << x;
        return x;
    }
    else
    {
        cout << y;
        return y;
    }
}