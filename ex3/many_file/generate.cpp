#include "generate.hpp"

void gsm::generate::generate_array(int *arr, const int n, const int max_value) {
    for(int i = 0; i < n; i++) {
        arr[i] = random() % max_value;
    }
}