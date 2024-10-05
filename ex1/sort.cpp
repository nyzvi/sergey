#include <iostream>
#include <random>

void interes_sort(int *arr,int &n);
void gen_massiv(int *arr,int &n);

int main(){
    int n;
    std::cout << "Введите длину массива\n";
    std::cin >> n;
    int arr[n];
    gen_massiv(arr,n);
    for (int i=0;i<n;i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    interes_sort(arr,n);
    for (int i=0;i<n;i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}

void interes_sort(int *arr,int &n){
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0 && arr[i] >= arr[i + 1])
            std::swap(arr[i], arr[i + 1]);
 
        if (i % 2 != 0 && arr[i] <= arr[i + 1])
            std::swap(arr[i], arr[i + 1]);
    }
}

void gen_massiv(int *arr,int &n){
    for(int i=0;i<n;i++){
        arr[i]=random() % 20;
    }
}