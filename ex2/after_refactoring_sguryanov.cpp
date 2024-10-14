#include <cmath>
#include <iostream>

float average_value (int *arr, const int &arr_size);
void generate_array (int *arr, const int &arr_size);

int main()
{   
    const int arr_size = 10;
    int arr[arr_size];
    const char format = ' ';

    std::cout << "Первая последовательность :" << std::endl;
    generate_array(arr,arr_size);
    for(int i = 0; i < arr_size; i++){
        std::cout << arr[i] << format;
    }
    std::cout << std::endl;

    std::cout << "Среднее первой последовательности : " << average_value(arr,arr_size) << std::endl;
    std::cout << std::endl;

    std::cout << "Вторая последовательность :" << std::endl;
    generate_array(arr,arr_size);
    for(int i = 0; i < arr_size; i++) {
        std::cout << arr[i] << format;
    }
    std::cout << std::endl;

    std::cout << "Среднее второй последовательности : " << average_value(arr,arr_size) << std::endl;
    std::cout << std::endl;

    std::cout << "Третья последовательность :" << std::endl;
    generate_array(arr,arr_size);
    for(int i = 0; i < arr_size; i++) {
        std::cout << arr[i] << format;
    }
    std::cout << std::endl;

    std::cout << "Среднее третьей последовательности : " << average_value(arr,arr_size) << std::endl;
    
}

float average_value (int *arr, const int &arr_size){
    float sum = 0;
    for(int i = 0; i < arr_size; i++) {
        sum += arr[i];
    }
    return sum/arr_size;
}

void generate_array (int *arr, const int &arr_size) {
    for(int i = 0; i < arr_size; i++) {
        arr[i] = random() % 20;
    }
}