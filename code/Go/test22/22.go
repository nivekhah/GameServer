package main

import (
	"fmt"
	
)

/*
  @author:Qinzijing
  @email:mm739023340@qq.com
  @description:通道
*/

func sum(s []int,c chan int){
	sum := 0
	for _,v := range s{
		sum += v
	}
	c <- sum
}
func main() {
	s := []int{7,2,8,-9,4,0}

	c := make(chan int)
	go sum(s[:len(s)/2],c)
	go sum(s[len(s)/2:],c)

	/* -5 17 12  后定义的这个先出结果？*/
	x,y := <-c,<-c
	fmt.Println(x,y,x+y)
}