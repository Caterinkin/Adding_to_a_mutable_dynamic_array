#include <iostream>
#include "dynamic_array.h"

// Функция для вывода динамического массива
void print_dynamic_array(int* arr, int logical_size, int actual_size) {
    for (int i = 0; i < actual_size; ++i) 
    {
        if (i < logical_size) 
        {
            std::cout << arr[i] << " ";
        }
        else 
        {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}

// Функция для добавления элемента в динамический массив
void append_to_dynamic_array(int*& arr, int& logical_size, int& actual_size, int new_element) 
{
    if (logical_size < actual_size)
    {
        // Если есть место в массиве, добавляем элемент
        arr[logical_size] = new_element;
        logical_size++;
    }
    else
    {
        // Если массив заполнен, создаем новый массив в два раза больше
        int new_actual_size = actual_size * 2;
        int* new_arr = new int[new_actual_size];

        // Копируем элементы из старого массива в новый
        for (int i = 0; i < logical_size; ++i) 
        {
            new_arr[i] = arr[i];
        }

        // Добавляем новый элемент
        new_arr[logical_size] = new_element;
        logical_size++;
        actual_size = new_actual_size;

        // Удаляем старый массив и переключаем указатель на новый
        delete[] arr;
        arr = new_arr;
    }
}
