package main

import (
	"fmt"
	
)

func main() {
	//_代表丢弃值
	_,numb,str := numbers()//只获取函数返回值的后两个
	fmt.Println(numb,str)
	
}

// func 函数名(参数)(返回类型)  
func numbers()(int,int,string){
	a,b,c := 1,2,"abc"
	return a,b,c
}