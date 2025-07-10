#ifndef ALGORITHMS_h
#define ALGORITHMS_h

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// сортировки
void SelectSort(int *arr, int size);  // сортировка выбором

// утилиты
void generate_random_array(int *arr, int size);  // создание рандомного массива
void generate_increasing_array(int *arr,
                               int size);  // создание возрастающего массива
void generate_decreasing_array(int *arr,
                               int size);  // создание убывающего массива

void print_array(int *arr, int size);

#endif