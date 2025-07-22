// #include <ncurses.h>
// #include <stdbool.h>

// #include "algorithms.h"

// #define ARRAY_SIZE 100

// int main() {
//     int arr[ARRAY_SIZE];

//     generate_random_array(arr, ARRAY_SIZE);
//     measure_time(SelectSort, arr, ARRAY_SIZE);

// // Подменю "Работа сортировки"
// MenuItem sort_work_menu[] = {
//     {"Сортировка выбором", MENU_ITEM_REGULAR, false, NULL, 0, &run_selection_sort},
//     {"Bubble Sort", MENU_ITEM_REGULAR, false, NULL, 0, &run_bubble_sort},
//     {"Quick Sort", MENU_ITEM_REGULAR, false, NULL, 0, &run_quick_sort},
//     {"Назад", MENU_ITEM_BACK, false, NULL, 0, NULL}};

// // Подменю "Сравнение сортировок" (с переключателями)
// MenuItem sort_compare_menu[] = {{"[ ] Сортировка выбором", MENU_ITEM_TOGGLE, false, NULL, 0, NULL},
//                                 {"[ ] Bubble Sort", MENU_ITEM_TOGGLE, false, NULL, 0, NULL},
//                                 {"[ ] Quick Sort", MENU_ITEM_TOGGLE, false, NULL, 0, NULL},
//                                 {"Начать сравнение", MENU_ITEM_REGULAR, false, NULL, 0,
//                                 &run_comparison},
//                                 {"Назад", MENU_ITEM_BACK, false, NULL, 0, NULL}};

// // Подменю "Визуализация"
// MenuItem sort_visualization_menu[] = {
//     {"Сортировка выбором", MENU_ITEM_REGULAR, false, NULL, 0, &visualize_selection_sort},
//     {"Bubble Sort", MENU_ITEM_REGULAR, false, NULL, 0, &visualize_bubble_sort},
//     {"Назад", MENU_ITEM_BACK, false, NULL, 0, NULL}};

// // Главное меню
// MenuItem main_menu[] = {{"Сортировки", MENU_ITEM_REGULAR, false, NULL, 3, NULL},
//                         {"Алгоритмы", MENU_ITEM_REGULAR, false, NULL, 2, NULL},
//                         {"Выход", MENU_ITEM_REGULAR, false, NULL, 0, &exit_program}};

// // Устанавливаем дочерние меню
// main_menu[0].children =
//     (MenuItem[]){{"Работа сортировки", MENU_ITEM_REGULAR, false, sort_work_menu, 4, NULL},
//                  {"Сравнение сортировок", MENU_ITEM_REGULAR, false, sort_compare_menu, 5, NULL},
//                  {"Визуализация", MENU_ITEM_REGULAR, false, sort_visualization_menu, 3, NULL}};

// main_menu[1].children = (MenuItem[]){{"Поиск", MENU_ITEM_REGULAR, false, NULL, 0,
// &run_search_algorithm},
//                                      {"Графы", MENU_ITEM_REGULAR, false, NULL, 0,
//                                      &run_graph_algorithm}};

// void draw_menu(MenuItem * menu, int count, int selected_index) {
//     clear();
//     for (int i = 0; i < count; i++) {
//         if (i == selected_index) {
//             attron(A_REVERSE);  // Выделение выбранного пункта
//         }

//         // Отрисовка пункта (с учетом типа)
//         if (menu[i].type == MENU_ITEM_TOGGLE) {
//             mvprintw(i + 2, 2, "%s", menu[i].selected ? "[X] " : "[ ] ");
//             printw("%s", menu[i].text + 4);  // Пропускаем "[ ] "
//         } else {
//             mvprintw(i + 2, 2, "%s", menu[i].text);
//         }

//         if (i == selected_index) {
//             attroff(A_REVERSE);
//         }
//     }
//     refresh();
// }

// void handle_input(MenuState * state) {
//     int key = getch();
//     MenuItem *current_menu = state->current_menu;

//     switch (key) {
//         case KEY_UP:
//             if (state->selected_index > 0) state->selected_index--;
//             break;
//         case KEY_DOWN:
//             if (state->selected_index < current_menu->child_count - 1) state->selected_index++;
//             break;
//         case ' ':  // Переключатель (для сравнения)
//             if (current_menu[state->selected_index].type == MENU_ITEM_TOGGLE) {
//                 current_menu[state->selected_index].selected ^= 1;  // Инвертируем состояние
//                 // Обновляем текст (меняем [ ] на [X])
//                 snprintf(current_menu[state->selected_index].text, 50, "[%c] %s",
//                          current_menu[state->selected_index].selected ? 'X' : ' ',
//                          current_menu[state->selected_index].text + 4);
//             }
//             break;
//         case 10:  // Enter
//             if (current_menu[state->selected_index].type == MENU_ITEM_BACK) {
//                 // Возврат назад
//                 if (state->menu_depth > 0) {
//                     state->menu_depth--;
//                     state->current_menu = state->menu_stack[state->menu_depth];
//                     state->selected_index = 0;
//                 }
//             } else if (current_menu[state->selected_index].child_count > 0) {
//                 // Переход в подменю
//                 state->menu_stack[state->menu_depth] = state->current_menu;
//                 state->menu_depth++;
//                 state->current_menu = current_menu[state->selected_index].children;
//                 state->selected_index = 0;
//             } else if (current_menu[state->selected_index].action != NULL) {
//                 // Вызов действия (запуск сортировки, визуализации и т.д.)
//                 current_menu[state->selected_index].action();
//             }
//             break;
//     }
// }

// //     int main() {
// //     initscr();
// //     cbreak();
// //     noecho();
// //     keypad(stdscr, TRUE);
// //     curs_set(0);

// //     MenuState state = {
// //         .current_menu = main_menu,
// //         .selected_index = 0,
// //         .menu_depth = 0
// //     };

// //     while (true) {
// //         draw_menu(state.current_menu, state.current_menu->child_count, state.selected_index);
// //         handle_input(&state);
// //     }

// //     endwin();
// //     return 0;
// // }

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
// return 0;
// }

#include <ncurses.h>
#include <unistd.h>

void drawArray(int arr[], int size, int a, int b) {
    clear();
    for (int i = 0; i < size; i++) {
        if (i == a || i == b) {
            attron(COLOR_PAIR(1));  // Красный
        }
        mvprintw(LINES / 2 - arr[i], i * 3, "%d", arr[i]);
        attroff(COLOR_PAIR(1));
    }
    refresh();
    usleep(200000);
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                drawArray(arr, size, j, j + 1);
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);

    drawArray(arr, size, -1, -1);
    bubbleSort(arr, size);

    getch();
    endwin();

    return 0;
}