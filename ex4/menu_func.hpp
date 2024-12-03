#pragma once 

#include "menu.hpp"

namespace gsm {
    const MenuItem* show_menu (const MenuItem* current);

    const MenuItem* exit (const MenuItem* current);
    
    const MenuItem* spbu (const MenuItem* current);
    const MenuItem* itmo (const MenuItem* current);
    const MenuItem* polit (const MenuItem* current);
    const MenuItem* leti (const MenuItem* current);
    const MenuItem* univer_go_back (const MenuItem* current);

    const MenuItem* pm_pu (const MenuItem* current);
    const MenuItem* mat_meh (const MenuItem* current);
    const MenuItem* lingvist (const MenuItem* current);
    const MenuItem* go_back (const MenuItem* current);
}