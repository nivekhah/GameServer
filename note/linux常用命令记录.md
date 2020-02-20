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

11. 在vim 编辑器下 :set nu 可以显示行号  :num可以显示光标所在的当前行号


12. 查看端口号应用情况 
   
   netstat -a | grep 22   表示打印出 占用端口为22 的所有应用程序 -a  --> all
 
   netstat -al | grep 22  ..... 所有监听应用程序  -a -->all -l  --> listen

13. cd  

    cd .. 回到上级目录 

    cd ~ 回到当前用户的根目录 
 
    cd - 回到上次操作的目录 并打印上次操作的目录到控制台 


```
