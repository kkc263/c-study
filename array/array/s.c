#include <stdio.h>

int main() {
    int arr[4][3] = {
        {100, 200, 300},
        {10, 0, 0},
        {50, 100, 150},
        {30, 40, 0}
    };

    int sum = 0;  

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d][%d]=%d   ", i, j, arr[i][j]);

            sum += arr[i][j];  
        }
        printf("\n");
    }

    printf("\n전체 합: %d\n", sum);  

    return 0;
}A