/*
Name : Trevedian Junior
Reg no:PA106/G/28831/25
Description :a program to declare and print elements of an Array given
*/
#include <stdio.h>

int main() {
    // An array is a collection of elements of the same data type stored in 
    //in contageous memory locations and accessed using an index.
    
    // ii. Declare and initialize the 2D array
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    // iii. Print the elements using nested for loop
    printf("Elements of the array:\n");
    for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
