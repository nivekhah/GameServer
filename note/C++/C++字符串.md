C 风格字符串

C 风格的字符串起源于 C 语言，并在 C++ 中继续得到支持。字符串实际上是使用 null 字符 '\0' 终止的一维字符数组。因此，一个以 null 结尾的字符串，包含了组成字符串的字符。

下面的声明和初始化创建了一个 "Hello" 字符串。由于在数组的末尾存储了空字符，所以字符数组的大小比单词 "Hello" 的字符数多一个。


```

C++ 中有大量的函数用来操作以 null 结尾的字符串：supports a wide range of functions that manipulate null-terminated strings:
序号	函数 & 目的
1	strcpy(s1, s2);
复制字符串 s2 到字符串 s1。
2	strcat(s1, s2);
连接字符串 s2 到字符串 s1 的末尾。
3	strlen(s1);
返回字符串 s1 的长度。
4	strcmp(s1, s2);
如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0。
5	strchr(s1, ch);
返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
6	strstr(s1, s2);
返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。


```


```

string s("hello");
cout<<s.size()<<endl;        //OK
cout<<"hello".size()<<endl;  //ERROR
cout<<s+"world"<<endl;       //OK
cout<<"hello"+"world"<<endl; //ERROR

strlen、sizeof与size()求字符串长度的区别

cout<<strlen("123")<<endl;   //返回 3
cout<<sizeof("123")<<endl;   //返回 4
string s = "123";
cout<<s.size()<<endl;        //返回 3

标准string库中的getline函数返回时会丢弃换行符const iterator与const_iterator的区别

vector<int>::const_iterator //不能改变指向的值，自身的值可以改变
const vector<int>::iterator //可以改变指向的值，自身的值不能改变
const vector<int>::const_iterator //自身的值和指向的值都是只读的

任何改变vector长度的操作都会使已存在的迭代器失效。如：在调用push_back之后，就不能再信赖指向vector的迭代器了

vector<int> ivec;
ivec.push_back(10);
vector<int>::iterator it = ivec.begin();
cout<<*it<<endl;
ivec.push_back(9);
cout<<*it<<endl;      //迭代器已经失效


```
