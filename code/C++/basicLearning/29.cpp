/* 
    关于C++中指针


 */

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int var = 20; //实际变量的声明
    int *ip;      //指针变量的声明

    ip = &var;  // ip 取 var变量的地址

    cout<<"Value of var variable : ";
    cout<<var <<endl;

    cout<<"Address in ip variable : ";
    cout<<ip<<endl;

    //访问指针中地址的值

    cout<<"Value of *ip varibale: ";
    cout << *ip <<endl;

    return 0;
}
