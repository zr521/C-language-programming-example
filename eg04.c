/**
 * scanf()�������ݣ�Ϊʲô�����з��������س�����ˢ�¼��̻����������ݣ����̻�������һ�������ַ�
 * scanf() �����������������ֹͣ
 * scanf() �����ĸ�ʽ�ַ������ַ�����
 *      ��
 *      ��ʽ��������ʽ˵������
 *      �ձ��ַ���'\n' '' ,'\t'��
 *      �ǿհ��ַ�
 *      ��
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
//scanf() �����������������ֹͣ
int a(){
    int i;
    scanf("%d",i);
    printf("i=%d\n",i);//��������ʱ����0
    return 0;
}
//scanf()�������ݣ�Ϊʲô�����з�
int b(){
    int x;
    scanf("%d",&x);
    scanf("%c",&x);     //���س�ʱ
    if(x=='\n')
        printf("�س����ǻ����ַ�\n");
    return 0;
}
//"%d\n"����հ׷�
int c(){
    int i;
    scanf("%d\n",&i);//'\n'��,ֻ��ͨ��һ�����������������������scanf������ִ��
    printf("i=%d\n",i);
    return 0;
}
int d(){
    int i,j;
    char i1,j1;
    scanf("%d%d",&i,&j);//������������ʱ���������θ����ͣ�ʹ�ÿհ׷���������
    printf("i=%d,j=%d\n",i,j);
    scanf("%c%c",&i1,&j1);
    printf("i1=%c,j1=%c\n",i1,j1);
    return 0;
}