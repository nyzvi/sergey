#include "generate.hpp"

void gsm::generate::generate_array(int *arr, const int n) {
    for(int i = 0; i < n; i++){
        arr[i] = random() % 20;
    }
}