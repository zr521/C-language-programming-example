//
// Created by ZRZQ on 2020/11/5.
//
/**
 * 优先等级并不完全决定运算顺序
 *      只有&& || 逗号，条件运算符，规定了运算顺序，必须自左往右
 * 以下运算符结合方向：自右向左
 * {
 *      单目运算符（！、~、++、--、-（负号）、*（指针）、&（取地址运算符）、sizeof（长度运算符））
 *      条件运算符 ？:
 *      赋值运算符
 * }
 */
#include <stdio.h>
int aa();
int bb();
int cc();
int dd();
void ee();
int ff();

int main() {
    //负号运算符
    printf("负号运算符：%d\n",4*-3);//负号优先级大于乘号
    //算术运算符（自左往右）
    printf("%d,%lf\n",5/2,5.0/2);
    int a=3.33;
    printf("%d\n",a);//浮点数赋值给整形数，省略小数部分

    //负整数取余（异号 取负号，13%3=4、-13-（-4*3）=-1，13-（-4*-3）=1，13%23=0、-13-（-0）=-13）
    printf("负整数取余：%d,%d,%d\n",-13%3,13%-3,-13%23);
    //检测赋值表达式是一个常数还是左值(左值就是在赋值中可以放在赋值操作符两边的值)
    int b=1,c=2,d=3;
    // printf("%d\n",(b=c)=d);
    //逗号表达式：自左往右运算，取右边值
    aa();
    //条件表达式自左往右运算
    bb();
    //自增运算符
    cc();
    //强制运算符
    dd();
    //逻辑
    ee();
    //sizeof
    ff();
    return 0;
}
//逗号运算符
int aa(void){
    int a, b, c;
    b = 2;
    c = 3;
    a = (b + 1, c + 2);
    printf("逗号运算符：%d\n", a);        //自左往右运算，取右边值
    //运算顺序和优先等级比较、必须自左往右
    int x=0;
    x+=2,(x*=2);
    printf("运算顺序：%d\n",x);
}
//条件表达式
int bb(void){
    int x = 2 ,y = 3,max=0;
    printf("条件表达式：\n");

    x>y ? (max=x) : (max=y);
    printf("%d\n",max);     //表达式2、3可以是数值表达式，还可以是赋值、函数表达式
    x>y ? printf("%d\n",x) : printf("%d\n",y);

    int x1=0;
    0 ? (x1 += 2) : 2;
    printf("条件运算符执行顺序：%d\n",x1);
}
//自增自减-常用于循环变量，指针变量
int cc(void){
    int x=3,y=3;
    printf("自增运算符：\n");
    printf("%d\n",++x);     //使用x之前,x先加1
    printf("%d\n",y++);     //使用y之后，y加1
}
//强制转换
int dd(void){
    float x=3.55;
    int y;
    //（int）x+y只转换x,int（x+y）
    y = (int)x;     //x的值和类型并未发生改变，该临时值赋值后不存在
    printf("强制转换；%d\n",y);
}
//运算顺序，必须自左往右
void ee(){
    int x=2,y=3;
    int a=2,b=3;
    printf("逻辑运算符：%d\n",((x==a) || (y==b)));        //可写成(x==a || y==b)
    printf("%d\n",((x>y) && (a<b)));        //可写成( x>y && a<b)
}
//sizeof()
int ff(){
    int x=10;
    int a[] = {1,2,3,4,5,6};
    printf("sizeof运算符：\n");
    printf("变量大小：%d\n", sizeof(x));
    printf("类型大小:%d\n", sizeof(int));
    printf("数组大小：%d\n", sizeof(a));
    printf("数组长度：%d\n", sizeof(a)/ sizeof(a[0]));//利用sizeof求数组长度
}
