#include <stdio.h>

int main(void)
{
    int arr[31] = {
        0,
    };
    int a;

    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &a);
        arr[a] = 1;
    }

    for (int i = 1; i <= 30; i++)
    {
        if (!arr[i])           // 해당 인덱스에 저장된 값이 1이 아니면(과제 제출 X)
            printf("%d\n", i); // 인덱스 출력
    }
    return 0;
}