/* 
    关于作用域 
一个函数体内可以存在重名的变量，前提是它们的作用域不同

当变量间出现重名的情况下，作用域小的屏蔽作用域大的，所以上面第一个 cout 输出 b 的值为 1，
但由于在块里面申请的变量作用域只限于当前块，所以离开这个块后变量会自动释放，所以第二个 cout 输出 b 的值为 2。

 */
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int b = 2;
    {
        int b = 1;
        cout << b << endl;
    }
    cout << b << endl;
    return 0;
}

