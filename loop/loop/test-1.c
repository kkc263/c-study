//#include<stdio.h>
//int main()
//{
//	int i, cnt = 0;
//for(i=1;i<=100;i++) {
//	if (i % 3 == 0 && i % 7 == 0) {
//		printf("%d*",i);
//
//
//
//
//	}
//
//}
//}
//
////#include<stdio.h>
////int main()
////{
////int i;
////for(i = 0;i < 10;i++) {
////	if (i % 3 == 0)continue;
////	if (i > 5)break;
////	printf("%d", i);
////
////
////
////
////}
////
////
////
////
////return 0;
////}
////
////


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i, cnt = 0;
    for (i = 1;i <= 100;i++) {
        if (i % 3 == 0 && i % 7 == 0) {//i를 3으로 나눌때 나머지가 0
            //100중에 3과7의 공배수를 구하는것
            printf("%d*", i);//조건을 만족하는 숫자 뒤에* 를 붙여 출력
        }
    }
    int i;
    for (i = 0;i < 10;i++) {//i는 0부터 9까지 증가
        if (i % 3 == 0)continue;//continue에 달린 3을 빼고 진행을 계속 한다고 하면
        if (i > 5)break;//5에 걸리면 탈출함
        printf("%d", i);//최종출력
 }
    return 0;
}