#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_func.hpp"
#include "menu_items.hpp"

int main () {
    std::setlocale(LC_ALL, "");
    std::cout << "Привет, абитуриент!" << std::endl;
    std::cout << "Выбери, что хочешь сделать:" << std::endl;
    
    const gsm::MenuItem* current = &gsm::MAIN;
    do {
        current = current->func(current);
    } while (true);

    return 0;
}
