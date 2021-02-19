# 快速入门

## 习题 1.2

修改程序使其返回 -1。

```shell
g++ ex1-2.cpp -o ex1-2
./ex1-2
echo $? # 255
```

## 习题 1.3

编写一个程序，在标准输出上打印 "Hello, World"。

## 习题 1.4

编写程序，使用乘法操作符 `*` 来产生两个数的积。

## 习题 1.5

重写程序，将每个运算对象的打印操作放在一条独立的语句中。

## 习题 1.6

解释下面程序片段是否合法。

```
std::cout << "The sum of " << v1;
		  << " and " << v2;
		  << " is " << v1 + v2 << std::endl;
```

如果程序是合法的，它的输出是什么？如果程序不合法，原因何在？应该如何修正？

```
ex1-6.cpp: In function ‘int main()’:
ex1-6.cpp:9:5: error: expected primary-expression before ‘<<’ token
    9 |     << " and " << v2;
      |     ^~
ex1-6.cpp:10:5: error: expected primary-expression before ‘<<’ token
   10 |     << " is " << v1 + v2 << std::endl;
      |     ^~
```

## 习题 1.7

编译一个包含不正确的嵌套注释的程序。

```
g++ ex1-7.cpp
ex1-7.cpp:4:3: error: expected unqualified-id before ‘/’ token
    4 |  */
      |  
```

## 习题 1.8

指出下列哪些输出语句是合法的(如果有的话)：

```
std::cout << "/*"; ✅
std::cout << "*/"; ✅
std::cout << /* "*/" */; ❌
```

The output of `g++ ex1-8.cpp`:

```
ex1-8.cpp:9:5: error: expected primary-expression before ‘return’
    9 |     return 0;
      |     ^~~~~~
```
