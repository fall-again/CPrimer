/*
 * @Description: 进制转换
 * @Author: HZQ
 * @Date: 2020-11-17 11:58:38
 * @LastEditTime: 2020-11-17 12:01:59
 */

#include <stdio.h>
int main(void)
{
    int x = 100;
    printf("dex = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dex = %d; octal = %#o; hex = %#x\n", x, x, x);

    getchar();
    return 0;
}