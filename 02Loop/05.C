/*
 * @Description:
 * @Author: HZQ
 * @Date: 2021-04-05 14:32:12
 * @LastEditTime: 2021-04-05 14:39:00
 */
#include <stdio.h>

int main(void)
{
    int m = 24;
    int n = 96;
    int r = 0;

    while (m % n)
    {
        r = m % n;
        m = n;
        n = r;
    }
    printf("%d为%d和%d的最大公约数\n", r, m, n);

    return 0;
}