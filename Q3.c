#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;
    char seatingChart[5][5]; 
	int studentsSeated = 0;
    int empty= 0;
    
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0) {
                seatingChart[i][j] = 'x';  
            } else {
                seatingChart[i][j] = 'o';  
            }
        }
    }

    
    printf("Classroom Seating Chart:\n");
    
    printf("(x = Student, o = Empty)\n");

    for (int i = 0; i < rows; i++) {
        printf("Row %d ", i + 1);
        for (int j = 0; j < cols; j++) {
            printf("%c ", seatingChart[i][j]);
        }
        printf("\n");
    }

    
   

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (seatingChart[i][j] == 'x') {
                studentsSeated++;
            } else {
                empty++;
            }
        }
    }

    printf("\nSummary:\n");
    printf("Students seated: %d\n", studentsSeated);
    printf("Empty desks: %d\n", empty);
    printf("Total desks: %d\n", rows * cols);

    return 0;
}
