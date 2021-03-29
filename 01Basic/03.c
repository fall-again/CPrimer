/*
 * @Description: basic
 * @Author: HZQ
 * @Date: 2021-03-28 09:01:35
 * @LastEditTime: 2021-03-29 11:35:22
 */

#include <stdio.h>
#include <string.h>

// void test()
// {
//     static int a = 1;
//     a++;
//     printf("a = %d\n", a);

//     return;
// }

int main(void)
{
    // int a = 10;
    // int arr[] = {1, 2, 3, 4, 5, 6};

    // printf("%d\n", sizeof(a));
    // printf("%d\n", sizeof(int));
    // printf("%d\n", sizeof a);
    // printf("%d\n", sizeof(arr));

    // int i = 0;

    // while (i < 5)
    // {
    //     test();
    //     i++;
    // }

    int num = 10;
    int *p;
    p = &num;
    printf("%p\n", &num);
    printf("%p\n", p);

    getchar();
    return 0;
}
