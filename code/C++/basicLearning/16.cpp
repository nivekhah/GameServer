/* 
    关于static

 */

#include<iostream>

//函数声明
void func(void);


static int count = 10;/* 全局变量 */

int main(int argc, char const *argv[])
{
    /* code */

    while(count--){
        func();
    }

    return 0;
}

//函数定义
void func(void){
    static int i = 5;
    i++;
    std::cout<<"变量i为"<<i;
    std::cout<<", 变量count为"<<count<<std::endl;
}


/* 

变量i为6, 变量count为9
变量i为7, 变量count为8
变量i为8, 变量count为7
变量i为9, 变量count为6
变量i为10, 变量count为5
变量i为11, 变量count为4
变量i为12, 变量count为3
变量i为13, 变量count为2
变量i为14, 变量count为1
变量i为15, 变量count为0

 */