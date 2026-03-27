//#include <stdio.h>
//
//int main() {
//    int i = 1;    // 1부터 시작
//    int sum = 0;  // 합 저장 변수
//
//    while (i <= 10) {
//        if (i % 2 != 0) {  // i가 홀수면
//            sum += i;      // sum에 더함
//        }
//        i++;               // i 1씩 증가
//    }
//    printf("a는 11\n");
//    printf("홀수의 합: %d\n", sum);
//
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int num, i;

//	scanf("%d", &num);
//	for (i = 1; i <= num;i++)
//	{
//		sum = sum + i;
//	}
//	printf("합계:%d", sum);
//
//
//	return 0;
//}
// 
#include<stdio.h>
int main(void)
{
int i, j;

for (i = 2;i <= 9;i++) A
    for (j = 1;j <= 9;j++)
    {
        printf("%d*%d=%d\t", i, j, i * j);
    }
}


//printf("원하는 단은? : ");//printf로 입력 준비
//scanf("%d", &i);//scanf로 숫자 입력을 받기
//printf("< %d 단 > \n", i);// 입력받은 값의 단이 몇단인지 출력한다
//for (j = 1; j <= 9; j++)//for문으로 조건이 거짓이 될 때까지 반복
////1부터 9까지 반복하는 반복문
////for 뒤에는 ;붙이지 않기
//{
//    printf("%d * %d = %d \n", i, j, i * j);//구구단 계산후 출력
//
//
//    return
//}