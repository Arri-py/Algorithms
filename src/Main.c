#include "algorithms.h"

#define ARRAY_SIZE 100

int main() {
    int arr[ARRAY_SIZE];

    generate_increasing_array(arr, ARRAY_SIZE);
    print_array(arr, ARRAY_SIZE);

    return 0;
}