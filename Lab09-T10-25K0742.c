#include <stdio.h>
void grid_pointer() {
    int grid[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int *ptr = &grid[0][0];
    int *p2 = &grid[1][0];

    printf("Accessed elements:\n");
    printf("%d ", *ptr);        
    printf("%d ", *(ptr + 5));  
    printf("%d ", *(ptr + 7));  
    printf("%d ", p2[2]);       
    printf("%d ", p2[-1]);      

    printf("\nDivisible by 3:\n");
    for (int i = 0; i < 12; i++) {
        if (*(ptr + i) % 3 == 0) {
            printf("%d ", *(ptr + i));
        }
    }

    printf("\nLast element: %d\n", *(&grid[0][0] + 11));
}

int main() {
    grid_pointer();
    return 0;
}

