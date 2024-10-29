#include "generate.hpp"
#include "io.hpp"
#include "sortings.hpp"

int main() {
    const int arr_size = gsm::io::input_user_size();
    int* arr = new int[arr_size];
    const int max_value = gsm::io::input_user_max_value();
    gsm::generate::generate_array(arr, arr_size, max_value);
    gsm::io::print_array("Массив до сортировки:", arr, arr_size);

    gsm::sortings::interes_sort(arr, arr_size);
    gsm::io::print_array("Массив после сортировки:", arr, arr_size);

    delete[] arr;

    return 0;
}