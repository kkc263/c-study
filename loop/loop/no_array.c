////3명의 점수(정수)를 입력받아
////합계 (3명 점수 합계)와 평균 (합계/3)출력
////
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//


#define _CRT_SECURE_NO_WARNINGS5
#include <stdio.h>
int main() {
    int price, money;
    int change;
    int c5000, c1000, c100;
  
    printf("물건값과 투입금액을 입력하세요");
 
    // 입력
    scanf("%d %d", &price, &money);
    // 잔돈 계산
    change = money - price;
    // 5000원권 개수
    c5000 = change / 5000;
    change = change % 5000;
    // 1000원권 개수
    c1000 = change / 1000;
    change = change % 1000;

    // 100원 동전 개수
    c100 = change / 100;
    change = change % 100;

    // 출력
    printf("5000원권: %d개\n", c5000);
    printf("1000원권: %d개\n", c1000);
    printf("100원동전: %d개\n", c100);
    printf("남은 잔돈: %d원\n", change);

    return 0;
}

























