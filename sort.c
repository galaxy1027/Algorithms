#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/*
-- Bubble Sort --
Compares each element to the element adjacent to itself.
If it is greater than the next element, swap the elements.
Then, compare to the following element.
Once in place, compare the rest of the elements to eachother in this pattern.

Average Time Complexity: O(n^2)

*/
void bubbleSort(int array[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}


void printArray(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%i\t", array[i]);
    }
    printf("\n");
}