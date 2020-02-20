#include<sys/types.h>
// socket 相关的函数与数据结构 在头文件
#include<sys/socket.h>
//  IPV4 IPV6 的协议簇信息
#include<netinet/in.h>
// 处理数字从操作系统字节序到网路字节序
#include<arpa/inet.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>


int main(int argc,char** argv){
    struct sockaddr_in sa;
    //创建socket 获得句柄
    int SocketFD = socket(PF_INET,SOCK_STREAM,IPPROTO_TCP);
    //回复
    int res;
    if(-1 == SocketFD){
        perror("connot create socket");
        exit(EXIT_FAILURE);
    }
    //为socket 申请ip的一些信息的结构体
    memset(&sa,0,sizeof sa);
    sa.sin_family = AF_INET;
    sa.sin_port = htons(2222);
    
    res = inet_pton(AF_INET,"127.0.0.1",&sa.sin_addr);


    if(-1 == connect(SocketFD,(struct sockaddr* &sa,sizeof sa))){
        perror("connect failed");
        close(SocketFD);
        exit(EXIT_FAILURE);
    }


    char buffer(512);
    int totalRead = 0;
    for(;;){
        int readSize =0;
        readSize = read(SocketFD,buffer+totalRead,sizeof(buffer-totalRead))
        if(readSize == 0){
        break;
 
        }else if(readSize == -1){
        perror("read failed");
        close(SocketFD);
        exit(EXIT_FAILURE);
        }
        totalRead += readSize;
    }

    buffer[totalRead] = 0;
    printf("get from server:  %s\n",buffer);
    (void) shutdown(SocketFD,Shut_RDWR);
    close(SocketFD);

    return EXIT_SUCCESS;
}
