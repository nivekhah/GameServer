/* 
    关于volatile 
        volatile 往往会用于多线程的修饰
 */

volatile bool inNext = false;
/* 
Thread A（） {
    // 第一个工作
    // isNext = true;
}

Thread B （）{
    if (isNext) {
        // 第二个工作
    }
} */

/* 
这里volatile 就是从来标记isNext， 以确保线程B每次都重新从内存中读取isNext的值，第二个工作一定在第一个工作之后进行。

但是要注意，这里无法保证顺序性，应该编译器编译的时候会重新打乱两个语句的先后顺序，因此做第一个工作和赋值给isNext不一定会按照你代码顺序正常执行。


 */