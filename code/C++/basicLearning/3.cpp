/* 
关于变量的声明 与 定义

extern  以下这个例子是 变量在头部已经被声明，但是在主函数
内被定义与初始化的

 */

#include<iostream>
using namespace std;

/* 
变量声明
 */
extern int a,b;
extern int c;
extern float f;


int main(int argc, char const *argv[])
{
    /* 变量定义 */
    
    int a,b;
    int c;
    float f;

    //实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout<<c<<endl;

    f = 70.0/30.0;
    cout << f << endl;



    return 0; 
}

