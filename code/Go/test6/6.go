package main

import (
	"unsafe"
	"fmt"
	
)

func main() {
	const Length int = 10
	const WIDTH int = 5
	var area int 
	const a,b,c = 1,"false","str"//多重赋值

	area = Length * WIDTH
	fmt.Printf("面积为   ：   %d" , area)
	println()
	println(a,b,c)


	//常量可以用len(), cap(), unsafe.Sizeof()函数计算表达式的值。常量表达式中，函数必须是内置函数，否则编译不过：

	const(

		e = "abc"
		f = len(e)
		g = unsafe.Sizeof(e)
	)
	fmt.Println(e,f,g)



}

/* 
	说明：

	常量还可以用作枚举：

	const (
    	Unknown = 0
    	Female = 1
    	Male = 2
	)


*/