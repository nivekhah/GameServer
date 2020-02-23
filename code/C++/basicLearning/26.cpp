/* 
    关于对字符串的更多操作

 */

#include<iostream>
#include<cstring>


using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char str1[11] = "Hello";
    char str2[11] = "World";
    char str3[11];
    int len;

    /* 复制 str1 到 str3 */
    strcpy(str3,str1);
    cout<<"strcpy(str3,str1): "<<str3<<endl;

    /* 连接str1和str2 */
    strcat(str1,str2);
    cout<<"strcat(str1,str2): "<<str1<<endl;

    //连接后str1的长度
    len = strlen(str1);
    cout<<"strlen(str1) : "<< len <<endl;


    return 0;
}


