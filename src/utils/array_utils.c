#include "../algorithms.h"

void generate_random_array(int *arr, int size) {
    int num = 100;  // числа от 0 до 99
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % num;
    }
}

void generate_increasing_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
}

// void generate_decreasing_array(int *arr, int size) {}

void print_array(int *arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        if (i != 99) {
            printf("%d ", arr[i]);
        } else {
            printf("%d", arr[i]);
        }
    }
    printf("]");
    printf("\n");
}