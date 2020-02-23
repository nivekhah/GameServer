/* 
关于全局变量 局部变量会覆盖全局变量的值
 */
#include<iostream>
using namespace std;

//全局变量声明
int g=20;

int main(int argc, char const *argv[])
{
    /* 局部变量声明 */
    int g=10;

    cout << g;

    return 0;
}


