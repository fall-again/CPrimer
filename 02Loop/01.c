/*
 * @Description: 分支和循环练习
 * 1.打印1-10 while循环
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
    //         continue; // continue 用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，
    //                   // 而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。
    //                   // break 用来永久终止循环
    //     }

    //     printf("%d\n", i);
    //     i++;
    // }

    int ch = 0;

    while ((ch = getchar()) != EOF) // EOF并非字符EOF 而是 ctrl+z
    {
        putchar(ch);
    }

    getchar();
    return 0;
}