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

// // Тип пункта меню
// typedef enum {
//     MENU_ITEM_REGULAR,  // Обычный пункт
//     MENU_ITEM_TOGGLE,   // Переключатель (для выбора сортировок)
//     MENU_ITEM_BACK      // Кнопка "Назад"
// } MenuItemType;

// // Элемент меню
// typedef struct MenuItem {
//     char *text;                 // Название пункта
//     MenuItemType type;          // Тип (обычный/переключатель/назад)
//     bool selected;              // Выбран ли (для MENU_ITEM_TOGGLE)
//     struct MenuItem *children;  // Подменю (если есть)
//     int child_count;            // Количество подпунктов
//     void (*action)();           // Функция при выборе
// } MenuItem;

// // Текущее состояние меню
// typedef struct {
//     MenuItem *current_menu;    // Текущее подменю
//     int selected_index;        // Выбранный пункт
//     int menu_depth;            // Глубина вложенности
//     MenuItem *menu_stack[10];  // Стек меню (для возврата назад)
// } MenuState;
#endif