/*
 * @Description: ��֧��ѭ����ϰ
 * 1.��ӡ1-10 whileѭ��
 * @Author: HZQ
 * @Date: 2021-03-30 14:43:13
 * @LastEditTime: 2021-03-30 15:09:22
 */

#include <stdio.h>

int main(void)
{
    // int i = 1;

    // while (i <= 10)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    // while (i <= 10)
    // {
    //     if (i == 5)
    //     {
    //         continue; // continue ������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�
    //                   // ����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������жϡ�
    //                   // break ����������ֹѭ��
    //     }

    //     printf("%d\n", i);
    //     i++;
    // }

    int ch = 0;

    while ((ch = getchar()) != EOF) // EOF�����ַ�EOF ���� ctrl+z
    {
        putchar(ch);
    }

    getchar();
    return 0;
}