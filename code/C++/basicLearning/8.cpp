/* 
    关于全局变量和局部变量

在程序中，局部变量和全局变量的名称可以相同。

但是在函数内的局部变量与全局变量是两个独立的变量，互不影响。

 */
#include<iostream>
using namespace std;

//全局变量声明
int g = 99;

//函数声明

int func();

int main()
{
    //局部变量声明
    int g = 10;
    int kk = func();
    cout<<kk;
    return 0;

}

int func(){
    return g;
}