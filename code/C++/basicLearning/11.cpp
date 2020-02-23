/* 
    关于const 常量

    定义成 const 后的常量，程序对其中只能读不能修改

 */

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    const double pi=3.141592;
    cout<<"圆周率的近似值是"<<pi<<endl;
    return 0;
}
