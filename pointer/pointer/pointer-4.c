#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_even(int ar[10]); // 함수 선언

int main(void)
{
    int ar[10];
    int res;

    printf("정수 10개 입력: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ar[i]);
    }

    res = count_even(ar);

    printf("짝수 개수: %d\n", res);

    return 0;
}

int count_even(int ar[10])
{
    int cnt = 0;

    for (int i = 0; i < 10; i++)
    {
        if (ar[i] % 2 == 0)
            cnt = cnt + 1;
    }

    return cnt;
}
printf_cnt(int r) {//매개변수 정수형 res->r
    printf("개수는:%d", r);








}   