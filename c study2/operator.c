#include <stdio.h>

int main()
{
    int num1, num2, sum, sub, mul;
    double divi;
    char op;

   // printf("첫번째 숫자를 입력하세요:  ");
    scanf_s("%d", &num1);
    //printf("연산자를 입력하세요(+ - * /):  ");
    scanf_s(" %c", &op);
    //printf("두번째 숫자를 입력하세요:  ");
    scanf_s("%d", &num2);

    switch (op) {

    case '+':
        sum = num1 + num2;
       // printf("덧셈 결과: %d\n", sum);
        break;

    case '-':
        sub = num1 - num2;
      //  printf("뺄셈 결과: %d\n", sub);
        break;

    case '*':
        mul = num1 * num2;
      ///  printf("곱셈 결과: %d\n", mul);
        break;

    case '/':
        divi = (double)num1 / num2;
       // printf("나눗셈 결과: %.2f\n", divi);
        break;

    default:
       // printf("잘못된 연산자입니다\n");

    }
    return 0;
}