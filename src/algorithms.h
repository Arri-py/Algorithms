#ifndef ALGORITHMS_h
#define ALGORITHMS_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// сортировки
void SelectSort(int *arr, int size);  // сортировка выбором

// утилиты
void generate_random_array(int *arr, int size);  // создание рандомного массива
void generate_increasing_array(int *arr,
                               int size);  // создание возрастающего массива
void generate_decreasing_array(int *arr,
                               int size);  // создание убывающего массива

void print_array(int *arr, int size);  // простой вывод массива

typedef void (*SortFunc)(int *, int);

void measure_time(SortFunc sort, int *arr, int size);  // функция для замера времени выполнения алгоритма

void print_sort_result(SortFunc sort, int *arr, int size, const char *name);

#endif