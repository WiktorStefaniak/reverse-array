#include <stdio.h>
#include <stdlib.h>
#include "dynamic-array.h"


void menu() {
    printf("1 - Enter values in array\n");
    printf("2 - Print values from array\n");
    printf("3 - Determine the maximum value\n");
    printf("4 - Determine the minimum value\n");
    printf("5 - Determine the average value\n");
    printf("0 - EXIT\n");
    printf("Select an option:\n");
}


int main() {
    int *array = NULL;
    int size = 0;
    int option;

    do {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 1: {
                array = enterValues(&size);
                break;
            }
            case 2: {
                displayArray(array, size);
                break;
            }
            case 3: {
                findMaxValue(array, size);
                break;
            }
            case 4: {
                findMinValue(array, size);
                break;
            }
            case 5: {
                calculateAverageValue(array, size);
                break;
            }
            case 0: {
                printf("END\n");
                break;
            }
            default: {
                printf("choose the right option\n\n");
                break;
            }
        }
    } while (option != 0);

    free(array);

    return 0;
}