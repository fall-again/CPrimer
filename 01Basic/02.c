/*
 * @Description: C语言中的常量、变量
 * @Author: HZQ
 * @Date: 2020-11-10 22:20:26
 * @LastEditTime: 2020-11-17 12:01:51
 */

/**
 * 变量：全局变量、局部变量
 * 1. 局部变量的作用域是变量所在的局部范围。
 * 2. 全局变量的作用域是整个工程。
 * 生命周期：变量的生命周期指的是变量的创建到变量的销毁之间的一个时间段
 * 1. 局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
 * 2. 全局变量的生命周期是：整个程序的生命周期。
 * */
/**
 * 常量分类：
 * 1. 字面常量
 * 2. const修饰的常变量
 * 3. #define 定义的标识符常量
 * 4. 枚举常量
 */
#include <stdio.h>

int main(void)
{
    int num = 4;
    printf("%d\n", num);
    num = 8;
    printf("%d\n", num);
    3;
    100; /* 字面常量，直观写出来的值 */

    /* const -常属性*/
    /* const修饰的常变量*/
    const int num1 = 4;
    printf("%d\n", num1);
    // num1 = 8;
    // printf("%d\n", num1);

    getchar();
    return 0;
}