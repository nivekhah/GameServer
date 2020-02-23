#-*- coding:utf-8 -*-


## callLater第二个参数是回调函数，第一个则是说明你希望在将来几秒钟时执行你的回调函数

class Countdown(object):
    counter = 5

    def count(self):
        if self.counter ==0:
            reactor.stop()
        else:
            print self.counter,'.....'
            self.counter -= 1
            reactor.callLater(1,self.count)


from twisted.internet import reactor

reactor.callWhenRunning(Countdown().count)

print 'Start!'
reactor.run()
print 'Stop!'



