/*
 * @Description: ѭ����ϰ
 * 1. �����ߵ��м��ӡ�ַ�
 * 2. �������룬�ж��ַ������
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

    // whileѭ��ʵ��
    // while (left <= right)
    // {
    //     Sleep(1000); // ��λ����
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
        printf("����������\n");
        scanf("%s", password);
        if (strcmp(password, "123456789") == 0)
        {
            printf("��������ɹ�\n");
            break;
        }
        else
        {
            printf("���������������������\n");
        }
    }
    if (i == 3)
    {
        printf("���λ����þ����˳�����\n");
    }
    return 0;
}
