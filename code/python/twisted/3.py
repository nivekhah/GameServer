#-*- coding:utf-8 -*-

## 用Twisted 写些代码

def hello():
    print("Hello from reactor loop")
    print("Lately I feel like I 'm suck in ruyt")

from twisted.internet import reactor
reactor.callWhenRunning(hello)
print('Straing the reactor')
reactor.run()
