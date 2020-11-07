//
// Created by ZRZQ on 2020/11/7.
//
#include <stdio.h>
#include <string.h>
int aa();
//结构体定义 ——复杂对象
struct Book
{
    char name[20];
    short price;
};
int  main(void){

    aa();
    struct Book b1 = {"C++",35};
      struct Book* pb = &b1;        //结构体指针变量的地址主要用作函数参数，传递结构体变量的地址
      printf("书名：%s\n",b1.name);       // -> 结构体指针 -> 成员变量
      printf("价格：%d\n",b1.price);       //. 结构体变量.成员变量

      strcpy(b1.name,"C语言");// strcpy() 字符串拷贝函数
      printf("书名：%s\n",b1.name);

}
int aa(){
    int a = 10;         //向内从申请4个字节空间
    int* p = &a;        //取地址 （int*）指针变量类型
    printf("a的地址：%p\n",&a);
    printf("a的地址：%p\n",p);

    *p = 20;        //(*)——间接引用操作符、解引用操作符 ：得到 p 指向的对象
    printf("改变后a的值：%d\n",*p);
    printf("指针类型的大小：%d\n", sizeof(p));          //指针变量类型大小 32位——4字节 64——位8字节
    printf("字符指针类型大小：%d\n", sizeof(char*));
    printf("double指针类型大小：%d\n", sizeof(double *));
}
