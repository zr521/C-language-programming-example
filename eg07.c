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
    aa();//����
    bb();//�ַ���
    cc();
}

//����
int aa(){
    //const ���������� ���γ�����
    const int x = 10;       //const ���εı��������ٱ��ı�
    // int x = 11;     // error: conflicting type qualifiers for 'x'
    printf("const:%d\n",x);

    //#define ����ı�ʶ������
    int st [M] = {};
    printf("define:%d\n",M);

    //enum ����ö�ٳ���
    printf("enum������\n");
    enum Sex sex =MALE;
    printf("%d\n",sex);
    printf("%d\n",MALE);
    printf("%d\n",FEMALE);
    printf("%d\n",SECRET);
    return 0;
}
//�ַ���
int bb(){
    char st1[11] = "abc";
    char st3[11] = {};
    char st2[] = {'d','e','f','a',0};
    /*strlen()���ַ�������*/
    printf("�ַ������ȣ�%d\n",strlen(st1));       //'\0'������
    printf("�ַ����鳤�ȣ�%d\n",strlen(st2));
    /*sizeof()���ַ�������*/
    printf("�ַ������ȣ�%d\n", sizeof(st1));      //sizeof()���������ռ���ֽ��� charռһ���ֽڣ��൱������ַ��ĸ���
    printf("�ַ����鳤�ȣ�%d\n", sizeof(st2));
    printf("�ַ����鳤�ȣ�%d\n",strlen("c:\test\32\test.c\n"));        //\ddd 8����ת���ַ� \xdd 16����ת���ַ�

    /*  strcpy(s1,s2)   �����ַ��� s2 ���ַ��� s1*/
    printf("�����ַ�����%s\n", strcpy(st3,st1));

    /*  strcpy(s1,s2)   �����ַ��� s2 ���ַ��� s1 ��ĩβ*/
    printf("�����ַ�����%s\n", strcat(st1,st2));

    /* strcmp(st1,st2)  ��� s1 �� s2 ����ͬ�ģ��򷵻� 0����� s1<s2 �򷵻�ֵС�� 0����� s1>s2 �򷵻�ֵ���� 0*/
    printf("�ַ����Ƿ���ͬ��%d\n", strcmp(st1,st2));

    /*  strchr(st1,"a") ����һ��ָ�룬ָ���ַ��� s1 ���ַ� ch �ĵ�һ�γ��ֵ�λ�á�*/
    printf("����һ��ָ�룬ָ���ַ��� s1 ���ַ� ch �ĵ�һ�γ��ֵ�λ�ã�%d\n", strchr(st1,"a"));

    /*strcpy(s1,s2)����һ��ָ�룬ָ���ַ��� s1 ���ַ��� s2 �ĵ�һ�γ��ֵ�λ�á�*/
    printf("����һ��ָ�룬ָ���ַ��� s1 ���ַ��� s2 �ĵ�һ�γ��ֵ�λ�ã�%d\n", strstr(st1,st2));

}
int cc(){
    /* c:\test\32\test.c*/
    printf("c:\\test\\32\\test.c\n");      //���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת���ַ�����
    /* c:      est    est.c*/
    printf("c:\test\32\test.c\n");
    /* ���" */
    printf("%s\n","\",\'");
}