package main


/*
  @author:Qinzijing
  @email:mm739023340@qq.com
*/
import (
	"fmt"
	
)

func main() {
	var i int
	var f float64
	var b bool
	var s string
	fmt.Printf("%v %v %v %q\n",i,f,b,s)
}


/* 
	说明：
	数值类型（包括complex64/128）为 0

	布尔类型为 false

	字符串为 ""（空字符串）

	以下几种类型为 nil：

	var a *int
	var a []int
	var a map[string] int
	var a chan int
	var a func(string) int
	var a error // error 是接口
*/

/* 
	说明：
	关于 := 
	var intVal int 

	intVal :=1 // 这时候会产生编译错误

	intVal,intVal1 := 1,2 // 此时不会产生编译错误，因为有声明新的变量，因为 := 是一个声明语句

*/