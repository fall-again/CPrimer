/*
 * @Description: ѭ����ϰ 
 * 1. n�Ľ׳ˡ�
 * 2. ���� 1!+2!+3!+......+10!
 * @Author: HZQ
 * @Date: 2021-03-30 18:41:36
 * @LastEditTime: 2021-03-30 19:04:21
 */

#include <stdio.h>

int main(void)
{
    // printf("��������ʵ�ֽ׳˵����֣�\n");
    // int num;
    // scanf("%d", &num);
    // int total = 1;

    // for (int i = 1; i <= num; i++)
    // {
    //     total *= i;
    // }
    // printf("%d�Ľ׳�Ϊ%d\n", num, total);

    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        int total1 = 1; // totalΪ�ý׳˵�ֵ��ÿ�ν���׳˳�ʼ��total��ֵ
        for (int j = 1; j <= i; j++)
        {
            total1 *= j;
        }
        sum += total1;
    }
    printf("10�Ľ׳˺�Ϊ%d\n", sum);

    return 0;
}