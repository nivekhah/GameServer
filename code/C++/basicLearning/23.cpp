/* 
    关于数组


 */
#include<iostream>
using namespace std;

#include<iomanip>  //用来对输入输出操作的格式进行更加方便的控制
using std::setw;

int main(int argc, char const *argv[])
{
    /* code */
    int n[10]; //n 是一个包含10个整数的数组
    //初始化数组元素
    for(int i=0;i<10;i++){
        n[i] = i + 100;//设置元素i为 i + 100
    }

    cout<<"Element"<<setw(13)<<"Value"<<endl;

    //输出数组中每一个元素的值
    for(int j = 0 ;j<10;j++){
        cout<<setw(7)<<j<<setw(13)<<n[j]<<endl;
    }


    return 0;
}



/* 
    关于iomanip

    控 制 符	作用
    setbase(n)	设置整数为n进制(n=8,10,16)
    setfill(n)	设置字符填充，c可以是字符常或字符变量
    setprecision(n)	设置浮点数的有效数字为n位
    setw(n)	设置字段宽度为n位
    setiosflags(ios::fixed)	设置浮点数以固定的小数位数显示
    setiosflags(ios::scientific)	设置浮点数以科学计数法表示
    setiosflags(ios::left)	输出左对齐
    setiosflags(ios::right)	输出右对齐
    setiosflags(ios::skipws)	忽略前导空格

 */


