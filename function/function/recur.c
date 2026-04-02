// 함수는 자기 자신을 호출할 수도 있다. 이것을 순환(recursion)라고 부른다.                                      
// 재귀 호출(recursive call)이란 함수 내부에서 함수가 자기 자신을 또다시 호출하는 행위
// (스스로를 호출)
// 함수 내에 재귀 호출을 중단하도록 조건이 변경될 명령문을 반드시 포함
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int func(int);
int main() {
	int a;
	printf("숫자를 입력하세요:");
	scanf("%d", &a);
	printf("%d", func(a));
}
int func(int a) {
	if (a <= 1)return 1;
	return a * func(a - 1);


}
