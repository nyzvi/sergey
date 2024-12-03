#include "menu_func.hpp"

#include <iostream>

const gsm::MenuItem* gsm::show_menu (const MenuItem* current) {
    for (int i = 1; i < current->children_count; i++){
            std::cout << current->children[i]->title << std::endl;
        }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Выбор > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const gsm::MenuItem* gsm::exit (const MenuItem* current) {
    std::exit(0);
}

const gsm::MenuItem* gsm::spbu (const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const gsm::MenuItem* gsm::itmo (const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const gsm::MenuItem* gsm::polit (const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const gsm::MenuItem* gsm::leti (const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const gsm::MenuItem* gsm::univer_go_back (const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const gsm::MenuItem* gsm::pm_pu (const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const gsm::MenuItem* gsm::mat_meh (const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const gsm::MenuItem* gsm::lingvist (const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const gsm::MenuItem* gsm::go_back (const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

