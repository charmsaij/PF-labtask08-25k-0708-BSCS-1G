#include <stdio.h>

int main() {
    int number, i, j;

    printf("Enter a number (for printing the tables): ");
    scanf("%d", &number);

    
    for (i = 1; i <= number; i++) {
        printf("Table of %d: ", i);

        
        for (j = 1; j <= 10; j++) {
            printf("%4d", i * j);  
        }

        printf("\n"); 
    }

    return 0;
}

