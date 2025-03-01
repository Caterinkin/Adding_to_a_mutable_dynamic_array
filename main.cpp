#include <iostream>
#include "dynamic_array.h"

int main()
{
    setlocale(LC_ALL, "rus");
    int actual_size, logical_size;

    // цикл для ввода размеров массива
    while (true) 
    {
        std::cout << "Введите фактический размер массива: ";
        std::cin >> actual_size;

        std::cout << "Введите логический размер массива: ";
        std::cin >> logical_size;

        // Проверка, что логический размер не превышает фактический
        if (logical_size > actual_size) {
            std::cout << "Ошибка! Логический размер массива не может превышать фактический!" << std::endl;
            std::cout << std::endl;
            continue; // Переход на следующую итерацию цикла
        }

        // Если размеры корректны, выходим из цикла
        break;
    }

    // Создание динамического массива
    int* arr = new int[actual_size];
      
    for (int i = 0; i < logical_size; ++i) 
    {
        std::cout << "Введите arr[" << i << "]: ";
        std::cin >> arr[i];
    }

    std::cout << "Динамический массив: ";
    print_dynamic_array(arr, logical_size, actual_size);

    // Цикл для добавления новых элементов
    while (true) {
        int new_element;
        std::cout << "\nВведите элемент для добавления (0 для выхода): ";
        std::cin >> new_element;

        if (new_element == 0) {
            break; // Выход из цикла, если введен 0
        }

        // Добавление элемента в массив
        append_to_dynamic_array(arr, logical_size, actual_size, new_element);

        // Вывод массива после добавления элемента
        std::cout << std::endl;
        std::cout << "Динамический массив: ";
        print_dynamic_array(arr, logical_size, actual_size);
    }

    // Вывод окончательного состояния массива
    std::cout << "\nСпасибо! Ваш массив: ";
    print_dynamic_array(arr, logical_size, actual_size);

    delete[] arr;

    return EXIT_SUCCESS;
}