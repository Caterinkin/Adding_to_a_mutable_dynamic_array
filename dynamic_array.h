#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

// ������� ��� ������ ������������� �������
void print_dynamic_array(int* arr, int logical_size, int actual_size);

// ������� ��� ���������� �������� � ������������ ������
void append_to_dynamic_array(int*& arr, int& logical_size, int& actual_size, int new_element);

#endif // DYNAMIC_ARRAY_H