package main

import (
	"fmt"
)


/*
  @author:Qinzijing
  @email:mm739023340@qq.com
  @description:函数引用传递
*/
func main() {
	var a int = 100
	var b int = 200

	swap(&a,&b)

	fmt.Println(a)
	fmt.Println(b)
	
}

func swap(x *int , y *int){
	var temp int;
	temp = *x
	*x = *y
	*y = temp
}