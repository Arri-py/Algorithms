#include "algorithms.h"

#define ARRAY_SIZE 100

int main() {
    int arr[ARRAY_SIZE];

    generate_random_array(arr, ARRAY_SIZE);
    measure_time(SelectSort, arr, ARRAY_SIZE);

    // printf("SelectSort\n");
    // printf("Возрастающий до сортировки\n");
    // generate_increasing_array(arr, ARRAY_SIZE);
    // print_array(arr, ARRAY_SIZE);
    // printf("Возрастающий после сортировки\n");
    // SelectSort(arr, ARRAY_SIZE);
    // print_array(arr, ARRAY_SIZE);

    // printf("Убывающий до сортировки\n");
    // generate_decreasing_array(arr, ARRAY_SIZE);
    // print_array(arr, ARRAY_SIZE);
    // printf("Убывающий после сортировки\n");
    // SelectSort(arr, ARRAY_SIZE);
    // print_array(arr, ARRAY_SIZE);

    // printf("Рандомный до сортировки\n");
    // generate_random_array(arr, ARRAY_SIZE);
    // print_array(arr, ARRAY_SIZE);
    // printf("Рандомный после сортировки\n");
    // SelectSort(arr, ARRAY_SIZE);
    // print_array(arr, ARRAY_SIZE);

    // free(arr_dynamic);
    return 0;
}