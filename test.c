#include <stdio.h>
#include <stdlib.h>


// 函数指针
// void (*pfun1)() 返回值为void，形参列表为空的一个函数
// void* pfun2() 是一个函数声明， 返回值为void*， 形参列表为空
void show(){
	int a = 10;
	int b = 20;
	printf("hello world!");
}
int main1(){
	void(*p)() = show;
	p();
	//(*p)(); 两种都可以调用指针,解引用和不解引用的作用一样
	system("pause");
	return 0;

}

// (int)0,(double)0,在一个数字前带了一堆圆括号,便是强制类型转化,括号里的为类型,
// (*(void(*)()0)();  void(*)()整个为函数指针类型,然后 0 被强转为函数指针类型,0 变为指针(地址),地址里放的是函数的地址,(*(void(*)()0)为解引用,整体为函数的入口, (*p)()相当于调用p里面所放的入口地址所对应的函数 => 调用0地址处指向的的函数
// void (*signal(int,void(*)(int)))(int); signal为函数(和括号结合),int为他的第一个参数,第二个为函数指针参数(类型为void*(函数指针类型),)函数名为signal,函数返回值为*(函数指针类型), => signal为一个函数声明,返回值为一个函数指针,参数为int类型和函数指针类型
// typedef void(* pfun_t)(int); pfun_t为函数指针类型,返回值为void,参数为int类型
// pfun_t signal(int, pfun_t); 第一个参数为int类型,第二个参数为函数指针类型的返回值为函数指针类型的函数signal

