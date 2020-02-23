#-*- coding:utf-8 -*-
import twisted
import twisted.internet.protocol
import twisted.internet.reactor


SERVER_PORT = 8081

class Server(twisted.internet.protocol.Protocol):#Server类需要继承一个父类

    def connectionMade(self):#客户端连接时后触发
        print("客户端地址： %s" % self.transport.getPeer().host)
    
    def dataReceived(self,data):#接受客户端数据
        print("服务端接受到的数据： %s " % data.decode("UTF-8")) #输出接收到的数据
        self.transport.write(("echo : %s" % data.decode("utf-8")).encode("UTF-8"))

class DefaultServerFactory(twisted.internet.protocol.Factory):  #处理工厂类
    protocol = Server  #住测回调操作

def main(): 
    twisted.internet.reactor.listenTCP(SERVER_PORT,DefaultServerFactory())#服务监听
    print("服务器启动完毕，等待客户端连接......")
    twisted.internet.reactor.run()## 事件论询 

if __name__ == "__main__":
    main()