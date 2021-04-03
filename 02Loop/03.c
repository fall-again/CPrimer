
/*
 * @Description: 在一个有序数组中查找具体的某个数字n。
 * 编写int binsearch(int x, int v[], int n); 功能：
 * 在v[0]<=v[1]<=v[2]<= ....<=v[n-1]的数组中查找x
 * 即二分查找法
 * 2021.3.31 普通写法 没有函数
 * @Author: HZQ
 * @Date: 2021-03-30 20:06:36
 * @LastEditTime: 2021-03-31 08:11:24
 */

#include <stdio.h>

/**
 * @name: 
 * @msg: 
 * @param {int} x
 * @param {int} v
 * @param {int} n
 * @return {*}
 * @Author: HZQ
 * @Date: 2021-03-31 07:56:34
 * @Modifier: 
 * @ModifyReason: 
 */
int binsearch(int x, int v[], int n) // 二分查找法
{
}

int main(void)
{
    int n;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]); // 数组长度
    int left = 0;                          // 左下标
    int right = sz - 1;                    // 右下标

    printf("请输入要查找的数字：\n");
    scanf("%d", &n);
    while (left < right)
    {
        int mid = (left + right) / 2; // 中间值
        if (arr[mid] > n)
        {
            right = mid - 1;
        }
        else if (arr[mid] < n)
        {
            left = mid + 1;
        }
        else
        {
            printf("找到，下标为%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("数组内无该元素");
    }

    return 0;
}