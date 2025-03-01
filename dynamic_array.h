#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

// Функция для вывода динамического массива
void print_dynamic_array(int* arr, int logical_size, int actual_size);

// Функция для добавления элемента в динамический массив
void append_to_dynamic_array(int*& arr, int& logical_size, int& actual_size, int new_element);

#endif // DYNAMIC_ARRAY_H