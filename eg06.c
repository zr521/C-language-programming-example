//
// Created by ZRZQ on 2020/11/7.
//
#include <stdio.h>
#include <string.h>
int aa();
//�ṹ�嶨�� �������Ӷ���
struct Book
{
    char name[20];
    short price;
};
int  main(void){

    aa();
    struct Book b1 = {"C++",35};
      struct Book* pb = &b1;        //�ṹ��ָ������ĵ�ַ��Ҫ�����������������ݽṹ������ĵ�ַ
      printf("������%s\n",b1.name);       // -> �ṹ��ָ�� -> ��Ա����
      printf("�۸�%d\n",b1.price);       //. �ṹ�����.��Ա����

      strcpy(b1.name,"C����");// strcpy() �ַ�����������
      printf("������%s\n",b1.name);

}
int aa(){
    int a = 10;         //���ڴ�����4���ֽڿռ�
    int* p = &a;        //ȡ��ַ ��int*��ָ���������
    printf("a�ĵ�ַ��%p\n",&a);
    printf("a�ĵ�ַ��%p\n",p);

    *p = 20;        //(*)����������ò������������ò����� ���õ� p ָ��Ķ���
    printf("�ı��a��ֵ��%d\n",*p);
    printf("ָ�����͵Ĵ�С��%d\n", sizeof(p));          //ָ��������ʹ�С 32λ����4�ֽ� 64����λ8�ֽ�
    printf("�ַ�ָ�����ʹ�С��%d\n", sizeof(char*));
    printf("doubleָ�����ʹ�С��%d\n", sizeof(double *));
}
