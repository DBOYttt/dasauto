#ifndef AUTODAS_G
#define AUTODAS_G
#include <iostream>
#include "autodas.h"

class SportowySamochod : public Samochod {
private:
    int maksymalnaPredkosc;

public:
    SportowySamochod(std::string marka, std::string model, int rokProdukcji, int maksymalnaPredkosc) 
        : Samochod(marka, model, rokProdukcji), maksymalnaPredkosc(maksymalnaPredkosc) {}

    int getMaksymalnaPredkosc() { return maksymalnaPredkosc; }
    void setMaksymalnaPredkosc(int m) { if(m >= 0) maksymalnaPredkosc = m; }

    void turbo(int zwiekszenie);
};
#endif // AUTODAS_G
