#include <iostream>
#include <random>
#include <algorithm>
#include <vector>
#include <chrono>


std::vector<int> pratt(int n){
    std::vector<int> a;
    int pow3 = 1;
    while (pow3 <=4000){
        int pow2 = pow3;
        while (pow2 <= 4000){
            a.push_back(pow2);
            pow2 *= 2;
        }
        pow3 *= 3;
    }
    sort(a.begin(),a.end(),std::greater<int>());
    return a; 
}

int main(){
    std::mt19937 mt(time(nullptr));
    int size[] = {1000, 10000, 100000, 1000000};
    for (int i=0;i<4;i++){
        std::vector<int> mas(size[i]);
        for(int j=0;j<size[i];j++){
            mas[j]= mt() % 10000000;
        }
        std::vector<int> mas1(size[i]);
        mas1 = mas;
        
        auto start = std::chrono::steady_clock::now();

        sort(mas1.begin(),mas1.end());

        auto end  = std::chrono::steady_clock::now();

        std::chrono::duration <double, std::milli> elapsed_seconds = end - start;
        std::cout << "Обычная сортровка: " << elapsed_seconds.count()<< " ms\n";
        std::vector<int> pr = pratt(size[i]);

        /*for(int h=0;h<pr.size();h++){
            std::cout << pr[h] <<" ";
        }*/
        auto start1 = std::chrono::steady_clock::now();

        for(int h : pr){
            for (int j = h; j <size[i]; j++) {
                int temp = mas[i];
                int k;
                for(k=j;k>=h && mas[k-h] > temp; k -= h ){
                    mas[k] = mas[k-h];
                }
                mas[k] = temp;
            }
        }

        auto end1  = std::chrono::steady_clock::now();

        std::chrono::duration <double, std::milli> elapsed_seconds1 = end1 - start1;
        std::cout << "Сортировка Шелла: " << elapsed_seconds1.count()<< " ms\n";
        std::cout << "\n";
        int n1=0;
        for(int j=0;j<size[i];j++){
            if (mas[j] == mas1[j]){
                n1++;
            }
        }
        std::cout<<n1<<"\n";
        if (n1 == size[i]-1){
            std::cout <<"yes";
        }
    }
}
