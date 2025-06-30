#include "algorithms.h"

void generate_random_array(int *arr, int size) {
    int num = 100;  // числа от 0 до 99
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % num;
    }
}