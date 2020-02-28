package main

import (
	"fmt"
	
)

/*
  @author:Qinzijing
  @email:mm739023340@qq.com
  @description:关于数组
*/

func main() {
	var n [10]int
	var i,j int


	/*  为数组n初始化元素   */
	for i=0;i<10;i++{
		n[i] = i + 100
	}

	for j =0 ; j < 10 ; j++ {
		fmt.Println("Element[%d] = %d\n",j,n[j] )
	}

}