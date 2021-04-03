/*
 * @Description: 循环练习 
 * 1. n的阶乘。
 * 2. 计算 1!+2!+3!+......+10!
 * @Author: HZQ
 * @Date: 2021-03-30 18:41:36
 * @LastEditTime: 2021-03-30 19:04:21
 */

#include <stdio.h>

int main(void)
{
    // printf("请输入想实现阶乘的数字：\n");
    // int num;
    // scanf("%d", &num);
    // int total = 1;

    // for (int i = 1; i <= num; i++)
    // {
    //     total *= i;
    // }
    // printf("%d的阶乘为%d\n", num, total);

    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        int total1 = 1; // total为该阶乘的值，每次进入阶乘初始化total的值
        for (int j = 1; j <= i; j++)
        {
            total1 *= j;
        }
        sum += total1;
    }
    printf("10的阶乘和为%d\n", sum);

    return 0;
}