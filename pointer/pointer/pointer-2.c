#include <stdio.h>

int main()
{
    int i = 3000;
    int* p = NULL;

    p = &i;

    printf("p=%p\n", p);
 
    printf("&i=%p\n\n", &i);
    i = 4000;
    printf("i=%d\n", i);
    *p = 5000;
    printf("*p=%d\n", *p);

    int x = 10, y = 20;
    int* pi;
    pi = &x;
    printf("pi=%p\n", pi);
    pi = &y;
    printf("*pi=%d\n", *pi);
    return 0;
}