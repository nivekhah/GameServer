package main

import (
	"github.com/astaxie/beego"
	
)

/*
  @author:Qinzijing
  @email:mm739023340@qq.com
  @description:beego hello程序
*/
type MainController struct{
	beego.Controller
}

func (this *MainController) Get(){
	this.Ctx.WriteString("Hello world")
}

func main() {
	beego.Router("/",&MainController{})

// Run beego application.
// beego.Run() default run on HttpPort
// beego.Run("localhost")
// beego.Run(":8089")
// beego.Run("127.0.0.1:8089")
	beego.Run("127.0.0.1:8089")
}