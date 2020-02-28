# GameServer

游戏后端 学习

> * C++
> * Python
> * Go
> * Java
> * Vue
> * 算法
> * Linux



# Go


[1.hello go](./code/Go/test/hello.go)

[2.go数据类型](./code/Go/test2/1.go)

[3.go赋值](./code/Go/test3/3.go)

[4.go变量](./code/Go/test4/4.go)

[5.go丢弃值](./code/Go/test5/5.go)

[6.go常量](./code/Go/test6/6.go)

[7.go带iota的常量](./code/Go/test7/7.go)

[8.go带iota的常量](./code/Go/test8/8.go)

[9.go指针](./code/Go/test9/9.go)

[10.go的for循环](./code/Go/test10/10.go)

[11.go的函数](./code/Go/test11/11.go)

[12.go的引用传递](./code/Go/test12/12.go)

[13.go数组](./code/Go/test13/13.go)

[14.go指针](./code/Go/test14/14.go)

[15.go结构体](./code/Go/test15/15.go)

[16.go切片](./code/Go/test16/16.go)

[17.go切片的元素追加与扩容](./code/Go/test17/17.go)

[18.go的range操作](./code/Go/test18/18.go)

[19.go的map](./code/Go/test19/19.go)

[20.go的接口](./code/Go/test20/20.go)

[21.go的并发](./code/Go/test21/21.go)

[22.go的并发下的通道](./code/Go/test22/22.go)

[23.go的并发下的带缓冲区的通道](./code/Go/test23/23.go)

[24.go的并发下的带缓冲区的通道缓冲区关闭](./code/Go/test24/24.go)

[25.Beego web框架hello world](./code/Go/beego-demo)

[25.Beego web框架Restful](https://github.com/gwduan/beego-demo.git)

# C++

[1.C++简介](./note/C++/c++简介.md)

[2.C++基本语法.md](./note/C++/C++基本语法.md)

[3.C++判断](./note/C++/C++判断.md)

[4.C++数据类型](./note/C++/C++数据类型.md)

[5.C++数字](./note/C++/C++数字.md)

[6.C++数组](./note/C++/C++数组.md)

[7.C++修饰符类型](./note/C++/C++修饰符类型.md)

[8.C++循环](./note/C++/C++循环.md)

[9.C++引用](./note/C++/C++引用.md)

[10.C++运算符](./note/C++/C++运算符.md)

[11.C++运算符](./note/C++/C++运算符.md)

[12.C++注释](./note/C++/C++注释.md)

[13.C++字符串](./note/C++/C++字符串.md)

[14.C++函数](./note/C++/C++函数.md)

[15.C++变量类型](./note/C++/C++变量类型.md)

[16.C++变量作用域](./note/C++/C++变量作用域.md)

[17.C++常量](./note/C++/C++常量.md)

[18.C++存储类](./note/C++/C++存储类.md)

[19.STL](./note/C++/STL.md)

[20.关于g++](./note/C++/关于g++.md)

[21.关于makefile](./note/C++/关于makefile.md)


[22.libevent 框架](./note/C++/关于makefile.md)


## 相关练习代码在 code/C++文件夹内


#Vue 

[1.NPM是什么](./note/C++/关于makefile.md)

[2.VScode相关配置以及使用教程](./note/C++/关于makefile.md)

[3.v-on 与 v-bind](./note/C++/关于makefile.md)

[4.v-show 与 v-if](./note/C++/关于makefile.md)

[5.计算属性 函数 监听器](./note/C++/关于makefile.md)

[6.过滤器](./note/C++/关于makefile.md)

[7.自定义插件](./note/C++/关于makefile.md)

[8.组件化](./note/C++/关于makefile.md)

[9.props 父子组件信息传递](./note/C++/关于makefile.md)

[10.Vue实例生命周期](./note/C++/关于makefile.md)

[11.Vue-routes路由](./note/C++/关于makefile.md)

[12.axios数据请求](./note/C++/关于makefile.md)

[13.webpack打包工具是什么](./note/C++/关于makefile.md)

[14.easymock模拟假数据](./note/C++/关于makefile.md)

[15.vue脚手架](./note/C++/关于makefile.md)


# Python 


## 关于异步网路框架 Twisted

[1.什么是异步模型 为什么要使用异步模型](./note/python/twisted/1.md)

[2.reactor模型](./note/python/twisted/2.md)

[3.deferred](./note/python/twisted/Deferred.md)

更多笔记见 note python 代码 见 code python


# Linux 


```

# 记录一些使用的比较多的指令

```
1.解压文件 tar -zxvf XXX.tar  

z: 表示用gzip来压缩或者解压

x: 表示解压

v:表示查看文件名

f：表示文件


对于.gz文件 使用 gunzip XX.gz


2.查看用户  users

3.查看用户所属用户组： groups

4.查看文件 cat XX文件

5.修改文件或文件夹所属用户/用户组 chown -R 用户名:组名 文件名或目录名

6.修改用户的权限  ---> chmod 与 chown 相区分

(1)chmod 777 文件名 

   4: 读权限 2:写权限 1：执行权限  [owner 权限] [group权限] [other权限]

(2) chmod a+x 文件名 a--> all x -->执行  表示为所有用户在这个文件上添加上 可执行的权限

    chmod o+x 文件名 o-->others 
7.使用vim来更改文件 vim 文件名

8.查看已安装的软件 dpkg --list 

9.删除某软件 sudo apt-get remove XX软件名 

10.修改文件所有者或者用户组 chown

chown 用户名 文件名 将该文件的所有者 换成这个用户

chown -R 用户名:用户组 文件目录  将某个目录下的所有文件的 所有者与所有组 都更改为这个用户 

11. 在vim 编辑器下 

    :set nu 可以显示行号  

    :num可以显示光标所在的当前行号

    :shell 可以在不关闭vim的情况下回到 shell 

       此时回到shell 做完工作以后 ctrl + D 或者 exit 可以回到vim

    :wq 写并离开

    :q 离开


12. 查看端口号应用情况 
   
   netstat -a | grep 22   表示打印出 占用端口为22 的所有应用程序 -a  --> all
 
   netstat -al | grep 22  ..... 所有监听应用程序  -a -->all -l  --> listen

13. cd  

    cd .. 回到上级目录 

    cd ~ 回到当前用户的根目录 
 
    cd - 回到上次操作的目录 并打印上次操作的目录到控制台 

14 sudo apt-get install XX 安装某个软件

   sudo apt-get remove XX 卸载某个软件 相关配置数据并没有删除

   sudo apt-get purge XX 卸载某个软件 以及相关数据

   sudo apt-get remove --auto-remove XX 卸载某个软件的安装包

15 软链接  在另一个目录下 共享另一个文件的方法 硬链接用了索引节点 相当于通过文件的别名共享文件

【软链接】（又称符号链接，即 soft link 或 symbolic link）：相当于我们 Windows 中的快捷方式，即如果你软链接一个目录，只是一个目录的快捷方式到指定位置，操作系统找这个快捷方式会直接找到真实目录下的文件。

ln -s /usr/software/nodejs/bin/npm   /usr/local/bin/ 

ln -s /usr/software/nodejs/bin/node   /usr/local/bin/

ln -s /home/qin/Common/Node/node-v12.16.1-linux-x64/bin/webpack    /usr/local/bin/  将webpack 加入到命令环境中 这样就能在linux下使用 webpack命令了


[关于软连接与硬连接](https://www.jianshu.com/p/b035d94fa959)

软链接这种文件共享的方式 常常被用到 bin/XX 软件 共享到 /usr/local/bin/ 来完成命令环境的搭建 如上述的 node npm  软连接后就可以 在linux 下使用node 与 npm 的命令了

16 git 设置与取消代理


git config --global https.proxy http://127.0.0.1:1080

git config --global https.proxy https://127.0.0.1:1080

git config --global --unset http.proxy

git config --global --unset https.proxy 


17. 关于hexo 写文章

hexo init XX 新建XX文件夹 并导入hexo 博客模板

hexo server 开启 server服务

hexo new "XXX"  新建名字为XXX的博文 会新建一个markdown 文件到source 下的_post文件夹下

更多指令 看[这个](https://hexo.io/zh-cn/docs/commands)



18.who  当前用户有谁


19 man + 命令名称  去看不同命令的详细介绍


20 telnet 192.168.0.1 8080 

如果是tcp的协议服务 可以用 telent 直接去测试该服务是否正常使用


21 关于gcc g++ 

gcc --> c


g++ --> cpp 


g++ -o 1.o 1.cpp  使用1.cpp生成1.o

g++ 17_1.cpp 17_2.cpp -o 17 同时编译多个文件


22.关于NPM


sudo npm -g install npm@6.4.1  升级npm自身版本

npm root -g 查看全局库目录地址

/home/qin/Common/Node/node-v12.16.1-linux-x64/lib/node_modules 



23.关于webpack

Webpack 是一个前端的 静态模块资源打包工具 ,能让浏览器也支持模块化(有些浏览器无法识别es6语法 webpack可以将相关代码打包成ES5 这些浏览器能识别的)

Webpack 核心主要进行 JavaScript 资源打包 它可以结合其他插件工具,将多种静态资源css、png、sass 分类转换成一个个静态文件,这样可以减少页面的请求。
可集成 babel 工具实现 EcmaScript 6 转 EcmaScript 5 ,解决兼容性问题
可集成 http 服务器
可集成模块热加载,当代码改变后自动刷新浏览器 等等功能

webpack ./js/main.js -o ./js/XX.js  之后生成的XX.js 就能被运用到其他不兼容的浏览器里






```



```




