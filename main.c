#include <stdio.h>
//函数的使用
void a(void);    //函数首部+分号，即函数声明，可以扩展函数名的作用域到此处
void b(int);     //函数声明的形参变量名是可以省略的
/**
 * main()之前的代码是为main()函数的执行提供信息的，不一定执行
 */
int main() {
    printf("Hello, World!\n");
    a();
    b(1);
    return 0;
}
void a(void){
    printf("a\n");
}
void b(int x){
    printf("%d",x);
    a();    //调用函数a()，a()函数必须定义在b() 函数定义域之内
}
