/*
 * @Description:1. дһ���������ж�һ�����ǲ�������
 * @Author: HZQ
 * @Date: 2021-04-07 09:57:36
 * @LastEditTime: 2021-04-11 08:52:14
 */

#include <stdio.h>
#include <math.h>

int is_prime(int i)
{
    for (int j = 2; j <= sqrt(i); j++)
    {
        if (i & j != 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main(void)
{
    int num = 0;

    printf("������һ�����֣�\n");
    scanf("%d", &num);

    if (is_prime(num) == 1)
    {
        printf("%d������.\n", num);
    }
    else
    {
        printf("%d��������\n", num);
    }

    return 0;
}