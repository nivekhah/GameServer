/*  
    关于static 修饰类成员变量

    1). 静态成员变量是先于类的对象而存在
    2). 这个类的所有对象共用一个静态成员
    3). 如果静态成员是公有的，那么可以直接通过类名调用
    4). 静态成员数据在声明时候类外初始化

 */

#include<iostream>

using namespace std;

class Data
{
    public:
        Data(){} //构造函数
        ~Data(){} //析够函数
        void show(){
            cout<<this->data<<" " << number<<endl;
        }

        static void showData()//先于类的对象而存在
        {
            //这个方法调用的时候不包含this指针
            cout<<" "<<number<<endl;
        }

    private:
        int data;
    public:
        static int number;//静态数据在声明的时候类外初始化
};
int Data::number=0;//静态成员初始化  如果没有显式初始化，会被程序自动初始化为0； 

int main(int argc, char const *argv[])
{
    /* code */
    Data::showData();//静态函数通过类名直接使用

    Data::number = 100;//通过类名直接使用
    
    //静态成员变量是先于类的对象而存在
    
    Data d;
    d.show();
    d.showData();//通过对象调用


    return 0;
}


/* 
    说明：

    2.static 修饰类的成员方法

    1). 静态成员函数是先于类的对象而存在
    2). 可用类名直接调用（公有）
    3). 在静态成员函数中没有this指针，所以不能使用非静态成员

    const 修饰--常量 ---- const修饰的常量代替宏定义

修饰成员变量

const int data;

const 修饰的成员变量必须在构造方法的参数列表初始化（const static int pdata=10;除外）const 修饰的成员变量不能被修改

修饰成员方法

void showData()const{ }

const 修饰的成员函数中不能修改成员变量，不能调用非 const 修饰的函数



 */
