#include <stdio.h>

int main() {
    int dan, i;

    printf("시작 단을 입력하세요: ");
    scanf("%d", &dan);

    while (dan <= 9) {
        i = 1;

        while (i <= 9) {
            printf("%d x %d = %d\n", dan, i, dan * i);
            i++;
        }

        printf("\n");
        dan++;
    }

    return 0;
}
int main(void)
int n;
int i = 1;
printf("출력하고싶은 단(2-9):");
scanf("%d", &n);
while (i <= 9)
{
    printf("%d*%d=%d\n", n, i, n * i);
    i++;

}
return 0;



}
