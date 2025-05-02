#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n; // 정수의 개수
    scanf("%d", &n);

    int *num = (int *)malloc(sizeof(int) * n);
    if (num == NULL)
    {
        printf("메모리 할당 실패");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int max = -1000001;
    int min = 1000001;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    printf("%d %d", min, max);

    free(num);
    return 0;
}