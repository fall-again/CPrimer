
/*
 * @Description: ��һ�����������в��Ҿ����ĳ������n��
 * ��дint binsearch(int x, int v[], int n); ���ܣ�
 * ��v[0]<=v[1]<=v[2]<= ....<=v[n-1]�������в���x
 * �����ֲ��ҷ�
 * 2021.3.31 ��ͨд�� û�к���
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
int binsearch(int x, int v[], int n) // ���ֲ��ҷ�
{
}

int main(void)
{
    int n;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]); // ���鳤��
    int left = 0;                          // ���±�
    int right = sz - 1;                    // ���±�

    printf("������Ҫ���ҵ����֣�\n");
    scanf("%d", &n);
    while (left < right)
    {
        int mid = (left + right) / 2; // �м�ֵ
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
            printf("�ҵ����±�Ϊ%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("�������޸�Ԫ��");
    }

    return 0;
}