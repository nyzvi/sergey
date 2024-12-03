#include "menu_items.hpp"
#include "menu_func.hpp"

const gsm::MenuItem gsm::PM_PU = {
    "1 - ПМ-ПУ", gsm::pm_pu, &gsm::SPBU
};

const gsm::MenuItem gsm::MAT_MEH = {
    "2 - МатМех", gsm::mat_meh, &gsm::SPBU
};

const gsm::MenuItem gsm::LINGVIST = {
    "3 - Лингвистический факультет", gsm::lingvist, &gsm::SPBU
};

const gsm::MenuItem gsm::GO_BACK = {
    "0 - Выход в предыдущее меню", gsm::go_back, &gsm::SPBU
};

namespace {
    const gsm::MenuItem* spbu_children[] = {
        &gsm::GO_BACK,
        &gsm::PM_PU,
        &gsm::MAT_MEH,
        &gsm::LINGVIST
    };
    const int size_spbu = sizeof(spbu_children) / sizeof(spbu_children[0]);
}
//
const gsm::MenuItem gsm::SPBU = {
    "1-СПбГУ", gsm::show_menu, &gsm::SHOW_MENU, spbu_children, size_spbu
};

const gsm::MenuItem gsm::ITMO = {
    "2-ИТМО", gsm::itmo, &gsm::SHOW_MENU
};

const gsm::MenuItem gsm::POLITEH = {
    "3-Политех", gsm::polit, &gsm::SHOW_MENU
};

const gsm::MenuItem gsm::LETI = {
    "4-ЛЭТИ", gsm::leti, &gsm::SHOW_MENU
};

const gsm::MenuItem gsm::UNIVER_GO_BACK = {
    "0-Выход в главное меню", gsm::univer_go_back, &gsm::SHOW_MENU
};

namespace {
    const gsm::MenuItem* univer_children[] = {
        &gsm::UNIVER_GO_BACK,
        &gsm::SPBU,
        &gsm::ITMO,
        &gsm::POLITEH,
        &gsm::LETI
    };
    const int size_univer = sizeof(univer_children) / sizeof(univer_children[0]);
}

const gsm::MenuItem gsm::SHOW_MENU = {
    "1 - Посмотреть университеты Санкт-Петербурга", gsm::show_menu, &gsm::MAIN, univer_children, size_univer
};

const gsm::MenuItem gsm::EXIT = {
    "0 - Я уже студент", gsm::exit, &gsm::MAIN
};

namespace {
    const gsm::MenuItem* main_children[] = {
        &gsm::EXIT, 
        &gsm::SHOW_MENU
    };
    const int size_main = sizeof(main_children) / sizeof(main_children[0]);
}

const gsm::MenuItem gsm::MAIN = {
    nullptr, gsm::show_menu, nullptr, main_children, size_main 
};






