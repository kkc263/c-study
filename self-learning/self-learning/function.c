
#include<stdio.h>
int digit(int n) {
	if (n < 10)return n;
	return(n % 10) + digit(n / 10);
}
int main() {
	printf("%d", digit(235));


}
10