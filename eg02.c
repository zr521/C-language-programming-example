#include<stdio.h>
int main(void)
{
    printf("%d\n", printf("abcd\n"));//printf()返回值为整形，输出字符的个数
    int x, y;
    printf("%d\n", scanf("%d%d", &x, &y));// scanf()返回按照正确格式输入的变量的个数
    return 0;

}
