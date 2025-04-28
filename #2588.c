#include <stdio.h>

int main(void)
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int result1, result2, result3, result4;
    result1 = (n2 % 10) * n1;
    result2 = (((n2 % 100) / 10) * n1);
    result3 = ((n2 / 100) * n1);
    result4 = n1 * n2;

    printf("%d\n%d\n%d\n%d\n", result1, result2, result3, result4);

    return 0;
}