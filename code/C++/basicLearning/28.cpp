/* 
    关于C++的输入
    输入一串字符，编程统计其中的数字个数和英文字母个数。输入的字符以 # 为结束标志。
 */

#include<iostream>
using namespace std;

#define N 100

int main(int argc, char const *argv[])
{
    /* code */
    char X[N];

    cin.getline(X,N); //以 cin.getline的形式输入

    int a=0,b=0;

    for(int i=0;i<N;i++){
        if(X[i] == '#')             //以#为结束标志
            break;  
        if(X[i]>='0'&&X[i]<='9')
            a++;
        if((X[i]>'a'&&X[i]<'z')||(X[i]>='A'&& X[i]<='Z'))
            b++;
    }

    cout<<a<<endl<<b<<endl;

    return 0;
}

