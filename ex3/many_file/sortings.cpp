#include "sortings.hpp"

void gsm::sortings::interes_sort(int *arr, const int n) {
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0 && arr[i] >= arr[i + 1]) {
            int tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
        }
            
        if (i % 2 != 0 && arr[i] <= arr[i + 1]) {
            int tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
        }
            
    }
}