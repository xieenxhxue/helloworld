# helloworld
https://space.bilibili.com/405472553/channel/collectiondetail?sid=1601540

## 初始化项目
git 初始化项目

main

## 预处理 

文件以.i ,.ii

gcc -E main.c -o main.i

展开include ,宏

## 编译 
以.s
gcc -S main.i -o main.s


gcc main.c 
c语言： a.out(默认)
c++语言: main

### 编译优化
gcc -02 -o main main.c

### 依赖于外部库  
 -I 来指定包含头文件的目录，-L 来指定库文件的目录

 gcc -02 -o main main.c -lm -I/include -L/lib


gcc -E main.c -o main.i

## 汇编 以.o,.obj 

gcc -C main.s -o main.o

## 链接 
gcc -o main.o main.out


# 文件只有一个main.c
target:prerequiries
    command
    
``` makefile
main:main.c
	g++ -o $@ $^ # g++ -o main main.c

clean:
	rm -f main
```


#拆分main.c hello.c world.c

# 拆分main.c 所有文件都在一个目录中
main.c
hello.c
hello.h
world.c
world.h

``` makefile

main:main.o hello.o world.o
	g++ -o main main.o hello.o world.o
hello.o:hello.c hello.h
    g++ -C hello.h
world.o:world.c world.h
    g++ -C world.h
clean:
    rm *.o
	rm -f main
```

# 将功能模块分类
main.c
hello/hello.h
hello/hello.c
world/world.h
world/world.c

``` makefile

main:main.o
	g++ -o $@ $^
hello.o

clean:
	rm -f main

```