#include <iostream>
#include <random>

void generate_array(int *arr, const int n);
void interes_sort(int *arr, const int n);
void print_array (const int * const arr, const int arr_size);

int main() {
    int arr_size;
    std::cout << "Введите длину массива: ";
    std::cin >> arr_size;
    int arr[arr_size];
    generate_array(arr,arr_size);

    std::cout << "Массив:";
    print_array(arr,arr_size);
    
    interes_sort(arr,arr_size);

    std::cout << "Массив после сортировки:";
    print_array(arr,arr_size);

    return 0;
}

void generate_array(int *arr, const int n) {
    for(int i = 0; i < n; i++){
        arr[i] = random() % 20;
    }
}

void interes_sort(int *arr, const int n) {
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0 && arr[i] >= arr[i + 1]) {
            std::swap(arr[i], arr[i + 1]);
        }
            
        if (i % 2 != 0 && arr[i] <= arr[i + 1]) {
            std::swap(arr[i], arr[i + 1]);
        }
            
    }
}

void print_array (const int * const arr, const int arr_size){
    std::cout << std::endl;
    const char format = ' ';
    for (int i = 0; i < arr_size; i++) {
        std::cout << arr[i] << format;
    }
    std::cout << std::endl;
}
