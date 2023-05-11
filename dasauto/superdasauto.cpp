#include "superdasauto.h"

void SportowySamochod::turbo(int zwiekszenie)
{
    if (zwiekszenie > 0) {
        maksymalnaPredkosc += zwiekszenie;
        std::cout << "Maksymalna predkosc zwiekszona o " << zwiekszenie << ". Teraz wynosi " << maksymalnaPredkosc << "\n";
    }
}
