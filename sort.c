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

/*
-- Selection Sort --
Similar to organizing a hand of cards.
Start by looking for the minimum value. Once it is found, if it is not in the
first index, swap it into place.
Move onto the next element. Find the 2nd smallest element, and make sure it is in
the 2nd index.
Loops through to find the nth smallest element to put in the nth index.

Average Time Complexity: O(n^2)

*/
void selectionSort(int array[], int size) {
    int i, j, min, temp;

    for (int i = 0; i < size - 1; i++) {
        min = i;
        for (int j = i; j < size; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        if(i != min) {
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%i\t", array[i]);
    }
    printf("\n");
}
