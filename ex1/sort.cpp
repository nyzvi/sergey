#include <iostream>
#include <random>

void generate_array(int *arr, int &n);
void interes_sort(int *arr, int &n);

int main() {
    int arr_size;
    std::cout << "Введите длину массива: ";
    std::cin >> arr_size;
    int arr[arr_size];
    generate_array(arr,arr_size);

    std::cout << "Массив :";
    std::cout << std::endl;
    const char format = ' ';
    for (int i = 0; i < arr_size; i++) {
        std::cout << arr[i] << format;
    }
    std::cout << std::endl;

    interes_sort(arr,arr_size);


    for (int i = 0; i < arr_size; i++) {
        std::cout << arr[i] << format;
    }

    return 0;
}

void generate_array(int *arr, int &n) {
    for(int i = 0; i < n; i++){
        arr[i] = random() % 20;
    }
}

void interes_sort(int *arr, int &n) {
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0 && arr[i] >= arr[i + 1]) {
            std::swap(arr[i], arr[i + 1]);
        }
            
        if (i % 2 != 0 && arr[i] <= arr[i + 1]) {
            std::swap(arr[i], arr[i + 1]);
        }
            
    }
}

