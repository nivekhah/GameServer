package main

import (
	"fmt"
	
)


/*
  @author:Qinzijing
  @email:mm739023340@qq.com
  @description:mm739023340@qq.com
*/
const (
    i=1<<iota
    j=3<<iota
    k
    l
)

func main() {
    fmt.Println("i=",i)
    fmt.Println("j=",j)
    fmt.Println("k=",k)
    fmt.Println("l=",l)
}