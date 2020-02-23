/* 
关于Exlicit(英文含义 显性的 ) 显示调用构造函数 

 */

class Test1
{
    public:
        Test1(int n){   // 普通构造函数
            num = n;
        }
    private:
        int num;

};
class Test2
{   public:
        explicit Test2(int n){  //explicit 显性的构造函数
            num = n;
        }
    private:
        int num;
};

int main(int argc, char const *argv[])
{
    /* code */
    Test1 t1 = 12; //隐式调用构造函数 成功
    //Test2 t2 = 12; //编译出错 不能够隐式调用构造函数
    Test2 t2(12); // 显示调用成功



    return 0;
}



/* 
说明：

C++中， 一个参数的构造函数(或者除了第一个参数外其余参数都有默认值的多参构造函数)， 

承担了两个角色。 1 是个构造器 ，2 是个默认且隐含的类型转换操作符。



 */