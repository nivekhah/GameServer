/* 
关于 int& r = i; 和 int r = i; 不同之处应该是内存的分配吧，后者会再开辟一个内存空间 

 */

#include <iostream>
 
using namespace std;
 
int main ()
{
   int i;
   int& r = i;
   i = 5;
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;
   cout << "Addr of i: " << &i << endl;
   cout << "Addr of r: " << &r << endl;
   
   int x;
   int y = x;
   x = 6;
   cout << "Value of x : " << x << endl;
   cout << "Value of y : " << y  << endl;
   cout << "Addr of x: " << &x << endl;
   cout << "Addr of y: " << &y << endl;
 
   return 0;
}