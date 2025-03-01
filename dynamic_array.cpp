#include <iostream>
#include "dynamic_array.h"

// ������� ��� ������ ������������� �������
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

// ������� ��� ���������� �������� � ������������ ������
void append_to_dynamic_array(int*& arr, int& logical_size, int& actual_size, int new_element) 
{
    if (logical_size < actual_size)
    {
        // ���� ���� ����� � �������, ��������� �������
        arr[logical_size] = new_element;
        logical_size++;
    }
    else
    {
        // ���� ������ ��������, ������� ����� ������ � ��� ���� ������
        int new_actual_size = actual_size * 2;
        int* new_arr = new int[new_actual_size];

        // �������� �������� �� ������� ������� � �����
        for (int i = 0; i < logical_size; ++i) 
        {
            new_arr[i] = arr[i];
        }

        // ��������� ����� �������
        new_arr[logical_size] = new_element;
        logical_size++;
        actual_size = new_actual_size;

        // ������� ������ ������ � ����������� ��������� �� �����
        delete[] arr;
        arr = new_arr;
    }
}