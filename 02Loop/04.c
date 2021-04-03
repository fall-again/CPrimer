/*
 * @Description: 循环练习
 * 1. 从两边到中间打印字符
 * 2. 输入密码，判断字符串相等
 * @Author: HZQ
 * @Date: 2021-03-31 08:12:33
 * @LastEditTime: 2021-04-03 10:51:04
 */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main()
{
    // char arr1[] = "HZQHZQHZQHZQHZQHZQ";
    // char arr2[] = "##################";
    // int left = 0;
    // int right = strlen(arr1) - 1;

    // printf("%s\n", arr2);

    // while循环实现
    // while (left <= right)
    // {
    //     Sleep(1000); // 单位毫秒
    //     arr2[left] = arr1[left];
    //     arr2[right] = arr1[right];
    //     printf("%s\n", arr2);
    //     left++;
    //     right--;
    // }

    int i = 0;
    char password[] = {0};

    for (i = 0; i < 3; i++)
    {
        printf("请输入密码\n");
        scanf("%s", password);
        if (strcmp(password, "123456789") == 0)
        {
            printf("密码输入成功\n");
            break;
        }
        else
        {
            printf("密码输入错误，请重新输入\n");
        }
    }
    if (i == 3)
    {
        printf("三次机会用尽，退出程序\n");
    }
    return 0;
}
