/*
 * @Description: basic
 * @Author: HZQ
 * @Date: 2021-03-28 09:01:35
 * @LastEditTime: 2021-03-29 18:54:59
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

struct Book
{
    char name[20]; // 书名
    int price;     // 价钱
};

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

    // int num = 10;
    // int *p;
    // double d = 3.14;
    // double *p1 = &d;
    // p = &num;

    // printf("%d\n", sizeof(char *));
    // printf("%d\n", sizeof(short *));
    // printf("%d\n", sizeof(int *));
    // printf("%d\n", sizeof(double *));
    // printf("%d\n", sizeof(p1));

    // printf("%p\n", &num);
    // printf("%p\n", p);

    struct Book b1 = {"一个", 60};
    printf("name = %s \n", b1.name);
    printf("price = %d \n", b1.price);

    struct Book *pb = &b1;
    printf("name = %s \n", (*pb).name);
    printf("price = %d \n", (*pb).price);
    printf("name = %s \n", pb->name);
    printf("price = %d \n", pb->price);

    getchar();
    return 0;
}
