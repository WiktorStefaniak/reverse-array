//
// Created by wiktor on 09.06.2024.
//
#include <iostream>
#include <cstdlib>
#include "dynamic-array.h"

int* enterValues(int *size) {
    printf("Enter the size of the array: ");
    scanf("%d", size);
    int *array = (int *)malloc(*size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.");
        exit(1);
    }
    printf("Enter %d elements for the array:\n", *size);
    for (int i = 0; i < *size; i++) {
        scanf("%d", &array[i]);
    }
    return array;
}

void displayArray(int *array, int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void findMaxValue(int *array, int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    printf("Maximum value: %d\n", max);
}

void findMinValue(int *array, int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    printf("Minimum value: %d\n", min);
}

void calculateAverageValue(int *array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    printf("Average value: %.2f\n", (float)sum / size);
}