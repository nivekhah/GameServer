/* 

    关于?:运算符 来代替if语句

 */
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a,b;
    cout<<"请输入两个数字";
    cin>>a>>b;
    a>b?cout<<a<<"大于"<<b<<endl:cout<<b<<"大于"<<a<<endl;
    return 0;
}


