/* 
    更多对String类的操作 
    1. append() -- 在字符串的末尾添加字符
    2. find() -- 在字符串中查找字符串
    4. insert() -- 插入字符
    5. length() -- 返回字符串的长度
    6. replace() -- 替换字符串
    7. substr() -- 返回某个子字符串

 */
#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* 定义一个string 类对象 */
    string http = "www.google.com";

    //打印字符串长度
    cout<<http.length()<<endl;

    //拼接
    http.append("/C++");
    cout<<http<<endl;

    //删除
    int pos = http.find("/C++");//查找 相应字符串的位置
    cout << pos <<endl;
    http.replace(pos,4,"");//从pos 位置开始的4个字符全部替换为空
    cout<<http<<endl;


    //找字符串
    int first = http.find_first_of(".");//从头开始找.的位置

    int last = http.find_last_of(".");//从尾开始寻找字符"."的位置

    cout << first << " "<<last<<endl; 
    
    cout << http.substr(first+1,last-first-1)<<endl;


    return 0;
}

