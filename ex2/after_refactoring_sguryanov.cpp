#include <cmath>
#include <iostream>

float calculate_average (const int * const arr,const int arr_size);
void generate_array (int* const arr, const int arr_size);
void print_array (const int * const arr, const int arr_size);


int main()
{   std::cout << "Введите количество запросов : ";
    int count_request;
    std::cin >> count_request;
    std::cout << std::endl;


    
    for (int i = 1; i <= count_request; i++){
        const int arr_size = 10;
        int arr[arr_size];
        generate_array(arr,arr_size);

        std::cout << "Последовательность №"<< i << std::endl;
        print_array(arr,arr_size);

        std::cout << "Среднее последовательности №"<< i <<" : " << calculate_average(arr,arr_size) << std::endl;
        std::cout << std::endl;
    }
}

float calculate_average (const int * const arr,const int arr_size){
    float sum = 0;
    for(int i = 0; i < arr_size; i++) {
        sum += arr[i];
    }
    return sum/arr_size;
}

void generate_array (int* const arr, const int arr_size){
    for(int i = 0; i < arr_size; i++) {
        arr[i] = random() % 20;
    }
}

void print_array (const int * const arr, const int arr_size){
    const char format = ' ';
    for(int i = 0; i < arr_size; i++) {
        std::cout << arr[i] << format;
    }
    std::cout<<std::endl;
}
