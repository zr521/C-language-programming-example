//
// Created by ZRZQ on 2020/11/5.
//
/**
 * ���ȵȼ�������ȫ��������˳��
 *      ֻ��&& || ���ţ�������������涨������˳�򣬱�����������
 * �����������Ϸ�����������
 * {
 *      ��Ŀ�����������~��++��--��-�����ţ���*��ָ�룩��&��ȡ��ַ���������sizeof���������������
 *      ��������� ��:
 *      ��ֵ�����
 * }
 */
#include <stdio.h>
int aa();
int bb();
int cc();
int dd();
 void ee();

int main() {
    //���������
    printf("�����������%d\n",4*-3);//�������ȼ����ڳ˺�

    //������������������ң�
    printf("%d,%lf\n",5/2,5.0/2);
    int a=3.33;
    printf("%d\n",a);//��������ֵ����������ʡ��С������

    //������ȡ�ࣨ��� ȡ���ţ�13%3=4��-13-��-4*3��=-1��13-��-4*-3��=1��13%23=0��-13-��-0��=-13��
    printf("������ȡ�ࣺ%d,%d,%d\n",-13%3,13%-3,-13%23);

    //��⸳ֵ����ʽ��һ������������ֵ(��ֵ�����ڸ�ֵ�п��Է��ڸ�ֵ���������ߵ�ֵ)
    int b=1,c=2,d=3;
    // printf("%d\n",(b=c)=d);

    //���ű���ʽ�������������㣬ȡ�ұ�ֵ
    aa();

    //����˳������ȵȼ��Ƚϡ�������������
    int x=0;
    x+=2,(x*=2);
    printf("����˳��%d\n",x);

    //��������ʽ������������
    int x2=0;
    0 ? (x2 += 2) : 2;
    printf("���������ִ��˳��%d\n",x2);
    bb();

    //���������
    cc();
    //ǿ�������
    dd();
    //�߼�
    ee();
    return 0;
}
int aa(void){
    int a, b, c;
    b = 2;
    c = 3;
    a = (b + 1, c + 2);
    printf("�����������%d\n", a);        //�����������㣬ȡ�ұ�ֵ
}
int bb(void){
    int x = 2 ,y = 3,max=0;
    x>y ? (max=x) : (max=y);
    printf("%d\n",max);     //����ʽ2��3��������ֵ����ʽ���������Ǹ�ֵ����������ʽ
    x>y ? printf("%d\n",x) : printf("%d\n",y);
}
//������ѭ��������ָ�����
int cc(void){
    int x=3,y=3;
    printf("�����������\n");
    printf("%d\n",++x);     //ʹ��x֮ǰ,x�ȼ�1
    printf("%d\n",y++);     //ʹ��y֮��y��1
}
int dd(void){
    float x=3.55;
    int y;
    //��int��x+yֻת��x,int��x+y��
    y = (int)x;     //x��ֵ�����Ͳ�δ�����ı䣬����ʱֵ��ֵ�󲻴���
    printf("ǿ��ת����%d\n",y);
}
//����˳�򣬱�����������
void ee(){
    int x=2,y=3;
    int a=2,b=3;
    printf("�߼��������%d\n",((x==a) || (y==b)));        //��д��(x==a || y==b)
    printf("%d\n",((x>y) && (a<b)));        //��д��( x>y && a<b)
}