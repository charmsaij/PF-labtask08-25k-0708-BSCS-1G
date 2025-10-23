#include <stdio.h>

int main() {
    int num[4][4];   
    int sum = 0;

    
    printf("Enter 16 numbers (for a 4x4 array):\n");

    for (int i = 0; i < 4; i++) {           
        for (int j = 0; j < 4; j++) {       
            printf("Enter value for [%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);    
            sum += num[i][j];           
        }
    }

    
    printf("\nThe 4x4 array is:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    
    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
