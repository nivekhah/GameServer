package main

import (
	"fmt"
	
)

var x,y int 

var (  //这种因式分解关键字写法一般用于声明全局变量
	a int 
	b bool
)

var c,d int = 1, 2 

var e,f = 123,"hello"



func main() {
	//新的变量 :=  可以直接声明
	g,h := 123,"sdj"
	fmt.Println(x, y, a, b, c, d, e, f, g, h)

}