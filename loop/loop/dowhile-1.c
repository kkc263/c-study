#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand((unsigned)time(NULL));
	int answer = rand() % 100;
	printf("%d\n", answer);
	int guess;
	int try = 0;
	do {
		printf("정답을 추측하여 보시오:");
		scanf_s("%d", &guess);
		try++;
		if (guess > answer)
			printf("입력한 숫자가 정다보다 high(위)\n");
		else if (guess > answer)
			printf("입력한 숫자가 정답보다 LOW(아래)\n");
		while (guess != answer);
		printf("축하합니다.시도횟수=%d\n", try);
		return 0;




	}





}