#include<stdio.h>


int main() {
    int matrix[3][3] = {
        {12, 34, 50},
        {72, 4, 6},
        {90, 67, 12}
    };

    int i, j;
    int maximum = matrix[0][0];  

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] > maximum) {
                maximum = matrix[i][j];  
            }
        }
    }

    printf("The maximum element in the matrix is: %d\n", maximum);

    return 0;
}















