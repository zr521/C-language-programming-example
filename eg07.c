//
// Created by ZRZQ on 2020/11/11.
//
#include <stdio.h>
#include <string.h>
#define M 10
enum Sex{
    MALE,
    FEMALE,
    SECRET
};
int aa();
int bb();
int cc();
int main(){
    aa();//常量
    bb();//字符串
    cc();
}

//常量
int aa(){
    //const ——常属性 修饰常变量
    const int x = 10;       //const 修饰的变量不能再被改变
    // int x = 11;     // error: conflicting type qualifiers for 'x'
    printf("const:%d\n",x);

    //#define 定义的标识符常量
    int st [M] = {};
    printf("define:%d\n",M);

    //enum ——枚举常量
    printf("enum常量：\n");
    enum Sex sex =MALE;
    printf("%d\n",sex);
    printf("%d\n",MALE);
    printf("%d\n",FEMALE);
    printf("%d\n",SECRET);
    return 0;
}
//字符串
int bb(){
    char st1[11] = "abc";
    char st3[11] = {};
    char st2[] = {'d','e','f','a',0};
    /*strlen()求字符串长度*/
    printf("字符串长度：%d\n",strlen(st1));       //'\0'不计入
    printf("字符数组长度：%d\n",strlen(st2));
    /*sizeof()求字符串长度*/
    printf("字符串长度：%d\n", sizeof(st1));      //sizeof()输出对象所占的字节数 char占一个字节，相当于输出字符的个数
    printf("字符数组长度：%d\n", sizeof(st2));
    printf("字符数组长度：%d\n",strlen("c:\test\32\test.c\n"));        //\ddd 8进制转义字符 \xdd 16进制转义字符

    /*  strcpy(s1,s2)   复制字符串 s2 到字符串 s1*/
    printf("复制字符串：%s\n", strcpy(st3,st1));

    /*  strcpy(s1,s2)   连接字符串 s2 到字符串 s1 的末尾*/
    printf("连接字符串：%s\n", strcat(st1,st2));

    /* strcmp(st1,st2)  如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0*/
    printf("字符串是否相同：%d\n", strcmp(st1,st2));

    /*  strchr(st1,"a") 返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。*/
    printf("返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置：%d\n", strchr(st1,"a"));

    /*strcpy(s1,s2)返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。*/
    printf("返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置：%d\n", strstr(st1,st2));

}
int cc(){
    /* c:\test\32\test.c*/
    printf("c:\\test\\32\\test.c\n");      //用于表示一个反斜杠，防止它被解释为一个转义字符序列
    /* c:      est    est.c*/
    printf("c:\test\32\test.c\n");
    /* 输出" */
    printf("%s\n","\",\'");
}