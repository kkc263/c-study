#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int  a, b, c;
	int f;
	float q;
	printf("3개의 정수를 입력하세요");
	scanf("%d %d %d", a, b, c);
	f = a + b + c;
	q = f / 3.;
	printf("합계는 %d", f);
	printf("평균은 %.2f", q);



	return 0;
}