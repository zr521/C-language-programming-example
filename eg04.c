/**
 * scanf()输入数据，为什么按换行符——：回车可以刷新键盘缓冲区的内容，键盘缓冲区有一个换行字符
 * scanf() 函数遇到错误输入会停止
 * scanf() 函数的格式字符串的字符分类
 *      （
 *      格式声明（格式说明符）
 *      空表字符（'\n' '' ,'\t'）
 *      非空白字符
 *      ）
 *
 */
#include <stdio.h>
int a();
int b();
int c();
int d();

int main() {
   // a();
   //b();
   d();
    return 0;
}
//scanf() 函数遇到错误输入会停止
int a(){
    int i;
    scanf("%d",i);
    printf("i=%d\n",i);//错误输入时返回0
    return 0;
}
//scanf()输入数据，为什么按换行符
int b(){
    int x;
    scanf("%d",&x);
    scanf("%c",&x);     //按回车时
    if(x=='\n')
        printf("回车键是换行字符\n");
    return 0;
}
//"%d\n"加入空白符
int c(){
    int i;
    scanf("%d\n",&i);//'\n'符,只能通过一个错误或另外输入的输入结束scanf函数的执行
    printf("i=%d\n",i);
    return 0;
}
int d(){
    int i,j;
    char i1,j1;
    scanf("%d%d",&i,&j);//输入连续数据时，对于整形浮点型，使用空白符起间隔作用
    printf("i=%d,j=%d\n",i,j);
    scanf("%c%c",&i1,&j1);
    printf("i1=%c,j1=%c\n",i1,j1);
    return 0;
}