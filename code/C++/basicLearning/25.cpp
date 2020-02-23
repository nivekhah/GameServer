/* 

关于String 类

 */


#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string str1 = "Hello";
    string str2 = "World";
    string str3 ;

    int len;

    //复制 str1 到 str3
    str3 = str1;
    cout<<"str3 : "<<str3<<endl;

    //连接str1 和 str2
    str3 = str1 + str2;
    cout<<"str1 + str2"<<str3<<endl;

    //连接后 str3的总长度
    len = str3.size();

    cout<<"str3.size() : "<<len<<endl;



    return 0;
}
