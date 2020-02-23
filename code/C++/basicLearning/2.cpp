/* 

枚举实例测试
枚举格式：
enum 枚举名{
     标识符[=整型常数],
     标识符[=整型常数],
...
    标识符[=整型常数]
} 枚举变量;

 */
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    enum days{one,two,three} day;
    day = one;

    switch (day)
    {
    case one:
        /* code */
        cout<<"one"<<endl;
        break;
    case two:
        cout<<"two"<<endl;
        break;
    default:
        cout<<"three"<<endl;
        break;
    }

    
    return 0;
}

