#include "io.hpp"

#include <iostream>


void gsm::print_array(const char* const comment,const int * const arr, const int arr_size){
	const char format = ' ';
	std::cout << comment;
	std::cout << std::endl;
	for (int i = 0; i < arr_size; i++) {
		std::cout << arr[i] << format;
    }
	std::cout << std::endl;
}
int gsm::size(){
	std::cout << "Введите длину массива:" << std::endl;
	int size;
	std::cin >> size;
	const int arr_size = size;
	return arr_size;
}


    
     
    