/*
 * @Description: 数据类型
 * @Author: HZQ
 * @Date: 2020-11-09 14:50:57
 * @LastEditTime: 2020-11-13 19:46:15
 */

#include <stdio.h>
/**
char      // 字符数据类型
short     // 短整型
int       // 整形
long      // 长整型
long long // 更长的整形
float     // 单精度浮点数
double//双精度浮点数
C语言有没有字符串类型？#include <stdio.h>int main(){    printf("%d\n", sizeof(char));    printf("%d\n", sizeof(short));    printf("%d\n", sizeof(int));    printf("%d\n", sizeof(long));    printf("%d\n", sizeof(long long));    printf("%d\n", sizeof(float));    printf("%d\n", sizeof(double));    printf("%d\n", sizeof(long double));    return 0;}char ch = 'w';int weight = 120;int salary = 20000;

每个数据类型的长度
 */
int main(void)
{
    printf("%d\n", sizeof(char));        // 1
    printf("%d\n", sizeof(short));       // 2
    printf("%d\n", sizeof(int));         // 4
    printf("%d\n", sizeof(long));        // 4/8
    printf("%d\n", sizeof(long long));   // 8
    printf("%d\n", sizeof(float));       // 4
    printf("%d\n", sizeof(double));      // 8
    printf("%d\n", sizeof(long double)); // 16
    getchar();
    return 0;
}