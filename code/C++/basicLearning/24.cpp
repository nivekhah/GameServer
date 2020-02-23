/* 
    关于Vector
    Array 是固定大小的，不能额外增加元素.当我们想定义不固定大小的字符时,可以使用 vector(向量) 标准库。 

 */

#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    /* 创建向量用于存储整型数据 */
    vector<int> vec;
    int i;

    //显示vector 的初始大小
    cout<<"Vector size = "<<vec.size()<<endl;

    //向向量vec追加5个整数
    for(i = 0;i<5;i++){
        vec.push_back(i);
    }

    cout<<"Extend vector size = " << vec.size()<<endl;

    return 0;
}
