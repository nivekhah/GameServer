
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc,char** argv){
    char hello{} = "hello world";
    struct sockaddr_in sa;
    //创建socket 获得句柄
    int SocketFD = socket(PF_INET,SOCK_STREAM,IPPROTO_TCP);
    if(-1 == SocketFD){
        perror("connot create socket");
        exit(EXIT_FAILURE);
    }
    //为socket 申请ip的一些信息的结构体
    memset(&sa,0,sizeof sa);
    sa.sin_family = AF_INET;
    sa.sin_port = htons(2222);
    sa.sin_addr.s_addr = hton(INADDR_ANY);
    
    //绑定socket
    if(-1 == bind(SocketFD,(struct sockaddr*)&sa,sizeof sa)){
        perror("bind failed");
        close(SocketFD);
        exit(EXIT_FAILURE);
    }
    //监听socket
    if(-1 == listen(SocketFD,10)){
        perror("listen failed");
        close(SocketFD);
        exit(EXIT_FAILURE);
    }    
    //accept 返回socket pair站位符号 服务器与客户端 对应的socket 对
    for(;;){
       perror("accept failed");
       close(SocketFD);
       exit(EXIT_FAILURE);
    }
    //write
    int writeSize = 0;
    //此处不能用int 类型 会产生warning  
    //因为 sizeof(hello)返回的是无符号的类型 而int 是有符号的
    //无符号与有符号的对比 会强制将无符号的转化为有符号的 
    //int totalWrite = 0;
    size_t totalWrite = 0;
    while(totalWrite < sizeof(hello)){
        //在句柄为ConnectFD的socketed对下 写 从指针为hello+totalWrite的位置 起写 长度为sizeof(hello)-totalWrite的东西
        writeSize = write(ConnectFD,hello + totalWrite,sizeof(hello)-totalWrite);
        if(-1 == writeSize){
        perror("write failed");
        close(ConnectFD);
        close(SocketFD);
        exit(EXIT_FAILURE);
        }
        totalWrite += writeSize;
    }
    //关闭Socket  此处上全双工关闭
    if(-1 == shutdown(ConnectFD,SHUT_RDWR)){
        perror("shutdown failed");
        close(ConnectedFD);
        close(SocketFD);
        exit(EXIT_FAILURE);

    }
    close(ConnectFD);

    close(SocketFD);
    
    return  EXIT_SUCCESS;
}


