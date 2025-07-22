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

void generate_decreasing_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = size - i;
    }
}

void print_array(int *arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        if (i != size - 1) {
            printf("%d ", arr[i]);
        } else {
            printf("%d", arr[i]);
        }
    }
    printf("]");
    printf("\n");
}

void measure_time(SortFunc sort, int *arr, int size) {
    int arr_copy[size];
    memcpy(arr_copy, arr, size * sizeof(int));

    clock_t start = clock();
    sort(arr_copy, size);
    clock_t end = clock();

    double time_spent = ((double)(end - start) * 1000 / CLOCKS_PER_SEC);
    printf("Время: %.3f мс\n", time_spent);
}

// void print_sort_result(SortFunc sort, int *arr, int size, const char *name) {}