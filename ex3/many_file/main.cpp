#include "generate.hpp"
#include "io.hpp"
#include "sortings.hpp"

int main() {
    const int arr_size = gsm::size();

    int arr[arr_size];

    gsm::generate::generate_array(arr, arr_size);

    gsm::print_array("Массив до сортировки:",arr,arr_size);

    gsm::sortings::interes_sort(arr,arr_size);

    gsm::print_array("Массив после сортировки:",arr,arr_size);

    return 0;
}