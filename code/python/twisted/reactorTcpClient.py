#-*- coding:utf-8 -*-
import twisted
import twisted.internet.protocol
import twisted.internet.reactor



SERVER_PORT = 8081
SERVER_HOST = "localhost"

class Client(twisted.internet.protocol.Protocol):#定义客户端类

    def connectionMade(self):#客户端连接时后触发
        print("连接成功 可直接交互 回车退出")
        self.send()

    def dataReceived(self,data):#接受客户端数据
        print(data) #输出接收到的数据
        self.send()
    def send(self):
        input_data = input("请输入要发送的数据")
        if input_data:
            self.transport.write(input_data)
        else:
            self.transport.loseConnection()

class DefaultClientFactory(twisted.internet.protocol.ClientFactory):  #处理工厂类
    protocol = Client  #住测回调操作
    #clientConnectionLost = clientConnectionFailed = lambda self,connector,reason:twisted.internet.reactor.stop()

def main(): 
    twisted.internet.reactor.connectTCP(SERVER_HOST,SERVER_PORT,DefaultClientFactory())#服务监听
    twisted.internet.reactor.run()## 事件论询 

if __name__ == "__main__":
    main()