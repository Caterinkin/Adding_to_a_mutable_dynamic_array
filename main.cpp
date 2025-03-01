#include <iostream>
#include "dynamic_array.h"

int main()
{
    setlocale(LC_ALL, "rus");
    int actual_size, logical_size;

    // ���� ��� ����� �������� �������
    while (true) 
    {
        std::cout << "������� ����������� ������ �������: ";
        std::cin >> actual_size;

        std::cout << "������� ���������� ������ �������: ";
        std::cin >> logical_size;

        // ��������, ��� ���������� ������ �� ��������� �����������
        if (logical_size > actual_size) {
            std::cout << "������! ���������� ������ ������� �� ����� ��������� �����������!" << std::endl;
            std::cout << std::endl;
            continue; // ������� �� ��������� �������� �����
        }

        // ���� ������� ���������, ������� �� �����
        break;
    }

    // �������� ������������� �������
    int* arr = new int[actual_size];
      
    for (int i = 0; i < logical_size; ++i) 
    {
        std::cout << "������� arr[" << i << "]: ";
        std::cin >> arr[i];
    }

    std::cout << "������������ ������: ";
    print_dynamic_array(arr, logical_size, actual_size);

    // ���� ��� ���������� ����� ���������
    while (true) {
        int new_element;
        std::cout << "\n������� ������� ��� ���������� (0 ��� ������): ";
        std::cin >> new_element;

        if (new_element == 0) {
            break; // ����� �� �����, ���� ������ 0
        }

        // ���������� �������� � ������
        append_to_dynamic_array(arr, logical_size, actual_size, new_element);

        // ����� ������� ����� ���������� ��������
        std::cout << std::endl;
        std::cout << "������������ ������: ";
        print_dynamic_array(arr, logical_size, actual_size);
    }

    // ����� �������������� ��������� �������
    std::cout << "\n�������! ��� ������: ";
    print_dynamic_array(arr, logical_size, actual_size);

    delete[] arr;

    return EXIT_SUCCESS;
}