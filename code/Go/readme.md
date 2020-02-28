## go基本介绍

```go
package main

import "fmt"

func main() {
   /* 这是我的第一个简单的程序 */
   fmt.Println("Hello, World!")
}


```
下一行 /*...*/ 是注释，在程序执行时将被忽略。单行注释是最常见的注释形式，你可以在任何地方使用以 // 开头的单行注释。多行注释也叫块注释，均已以 /* 开头，并以 */ 结尾，且不可以嵌套使用，多行注释一般用于包的文档描述或注释成块的代码片段



## 基础语法

```
Go 标记
Go 程序可以由多个标记组成，可以是关键字，标识符，常量，字符串，符号。如以下 GO 语句由 6 个标记组成：

fmt.Println("Hello, World!")
6 个标记是(每行一个)：

1. fmt
2. .
3. Println
4. (
5. "Hello, World!"
6. )
行分隔符
在 Go 程序中，一行代表一个语句结束。每个语句不需要像 C 家族中的其它语言一样以分号 ; 结尾，因为这些工作都将由 Go 编译器自动完成。

如果你打算将多个语句写在同一行，它们则必须使用 ; 人为区分，但在实际开发中我们并不鼓励这种做法。

以下为两个语句：

fmt.Println("Hello, World!")
fmt.Println("菜鸟教程：runoob.com")
注释
注释不会被编译，每一个包应该有相关注释。

单行注释是最常见的注释形式，你可以在任何地方使用以 // 开头的单行注释。多行注释也叫块注释，均已以 /* 开头，并以 */ 结尾。如：

// 单行注释
/*
 Author by 菜鸟教程
 我是多行注释
 */
标识符
标识符用来命名变量、类型等程序实体。一个标识符实际上就是一个或是多个字母(A~Z和a~z)数字(0~9)、下划线_组成的序列，但是第一个字符必须是字母或下划线而不能是数字。

以下是有效的标识符：

mahesh   kumar   abc   move_name   a_123
myname50   _temp   j   a23b9   retVal



以下是无效的标识符：

1ab（以数字开头）
case（Go 语言的关键字）
a+b（运算符是不允许的）
字符串连接
Go 语言的字符串可以通过 + 实现：

实例
package main
import "fmt"
func main() {
    fmt.Println("Google" + "Runoob")
}
以上实例输出结果为：

GoogleRunoob

```



```


关键字
下面列举了 Go 代码中会使用到的 25 个关键字或保留字：

break	default	func	interface	select
case	defer	go	map	struct
chan	else	goto	package	switch
const	fallthrough	if	range	type
continue	for	import	return	var
除了以上介绍的这些关键字，Go 语言还有 36 个预定义标识符：

append	bool	byte	cap	close	complex	complex64	complex128	uint16
copy	false	float32	float64	imag	int	int8	int16	uint32
int32	int64	iota	len	make	new	nil	panic	uint64
print	println	real	recover	string	true	uint	uint8	uintptr
程序一般由关键字、常量、变量、运算符、类型和函数组成。

程序中可能会使用到这些分隔符：括号 ()，中括号 [] 和大括号 {}。

程序中可能会使用到这些标点符号：.、,、;、: 和 …。

Go 语言的空格
Go 语言中变量的声明必须使用空格隔开，如：

var age int;
语句中适当使用空格能让程序更易阅读。

无空格：

fruit=apples+oranges;
在变量与运算符间加入空格，程序看起来更加美观，如：

fruit = apples + oranges; 
```

```
go数据类型


在 Go 编程语言中，数据类型用于声明函数和变量。

数据类型的出现是为了把数据分成所需内存大小不同的数据，编程的时候需要用大数据的时候才需要申请大内存，就可以充分利用内存。

Go 语言按类别有以下几种数据类型：

序号	类型和描述
1	布尔型
布尔型的值只可以是常量 true 或者 false。一个简单的例子：var b bool = true。
2	数字类型
整型 int 和浮点型 float32、float64，Go 语言支持整型和浮点型数字，并且支持复数，其中位的运算采用补码。
3	字符串类型:
字符串就是一串固定长度的字符连接起来的字符序列。Go 的字符串是由单个字节连接起来的。Go 语言的字符串的字节使用 UTF-8 编码标识 Unicode 文本。
4	派生类型:
包括：
(a) 指针类型（Pointer）
(b) 数组类型
(c) 结构化类型(struct)
(d) Channel 类型
(e) 函数类型
(f) 切片类型
(g) 接口类型（interface）
(h) Map 类型
数字类型
Go 也有基于架构的类型，例如：int、uint 和 uintptr。

序号	类型和描述
1	uint8
无符号 8 位整型 (0 到 255)
2	uint16
无符号 16 位整型 (0 到 65535)
3	uint32
无符号 32 位整型 (0 到 4294967295)
4	uint64
无符号 64 位整型 (0 到 18446744073709551615)
5	int8
有符号 8 位整型 (-128 到 127)
6	int16
有符号 16 位整型 (-32768 到 32767)
7	int32
有符号 32 位整型 (-2147483648 到 2147483647)
8	int64
有符号 64 位整型 (-9223372036854775808 到 9223372036854775807)
浮点型
序号	类型和描述
1	float32
IEEE-754 32位浮点型数
2	float64
IEEE-754 64位浮点型数
3	complex64
32 位实数和虚数
4	complex128
64 位实数和虚数
其他数字类型
以下列出了其他更多的数字类型：

序号	类型和描述
1	byte
类似 uint8
2	rune
类似 int32
3	uint
32 或 64 位
4	int
与 uint 一样大小
5	uintptr
无符号整型，用于存放一个指针




```









