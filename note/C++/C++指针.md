每一个变量都有一个内存位置，每一个内存位置都定义了可使用连字号（&）运算符访问的地址，它表示了在内存中的一个地址。


```

什么是指针？

指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。指针变量声明的一般形式为：

type *var-name;

在这里，type 是指针的基类型，它必须是一个有效的 C++ 数据类型，var-name 是指针变量的名称。用来声明指针的星号 * 与乘法中使用的星号是相同的。但是，在这个语句中，星号是用来指定一个变量是指针。以下是有效的指针声明：

int    *ip;    /* 一个整型的指针 */
double *dp;    /* 一个 double 型的指针 */
float  *fp;    /* 一个浮点型的指针 */
char   *ch;    /* 一个字符型的指针 */

所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数。不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同。



```


```
C++ 指针详解

在 C++ 中，有很多指针相关的概念，这些概念都很简单，但是都很重要。下面列出了 C++ 程序员必须清楚的一些与指针相关的重要概念：
概念	描述
C++ Null 指针	C++ 支持空指针。NULL 指针是一个定义在标准库中的值为零的常量。
C++ 指针的算术运算	可以对指针进行四种算术运算：++、--、+、-
C++ 指针 vs 数组	指针和数组之间有着密切的关系。
C++ 指针数组	可以定义用来存储指针的数组。
C++ 指向指针的指针	C++ 允许指向指针的指针。
C++ 传递指针给函数	通过引用或地址传递参数，使传递的参数在调用函数中被改变。
C++ 从函数返回指针	C++ 允许函数返回指针到局部变量、静态变量和动态内存分配。



```




```
关于C++的指针和引用的区别


1.引用必须在声明时将其初始化，不能先声明后赋值。

2.引用更接近const指针，必须在创建时进行初始化，一旦引用和某个变量关联起来，该引用就会一直指向该变量。



```
