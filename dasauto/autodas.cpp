#include "autodas.h"
/*
Samochod::Samochod(std::string marka, std::string model, int rokProdukcji)
{
        this->marka = marka;
        this->model = model;
        this->rokProdukcji = (rokProdukcji > 0) ? rokProdukcji : 0;
        this->przebieg = 0;
}

std::string Samochod::getMarka()
{
    return marka;
}

void Samochod::setMarka(std::string marka)
{
    this->marka = marka;
}

std::string Samochod::getModel()
{
    return model;
}

void Samochod::setModel(std::string model)
{
    this->model = model;
}

int Samochod::getRokProdukcji()
{
    return rokProdukcji;
}

void Samochod::setRokProdukcji(int rokProdukcji)
{
    if (rokProdukcji > 0)
        this->rokProdukcji = rokProdukcji;
}

int Samochod::getPrzebieg()
{
    return przebieg;
}

void Samochod::setPrzebieg(int przebieg)
{
    if (przebieg >= 0)
        this->przebieg = przebieg;
}

void Samochod::jedz(int odleglosc)
{
    if (odleglosc > 0) {
        przebieg += odleglosc;
        std::cout << "Samochod przejechal " << odleglosc << " km. Caly przebieg wynosi teraz: " << przebieg << " km." << std::endl;
    }
}

void Samochod::informacje()
{
    std::cout << "Marka: " << marka << ", Model: " << model << ", Rok Produkcji: " << rokProdukcji << ", Przebieg: " << przebieg << " km." << std::endl;
}
*/

void Samochod::jedz(int odleglosc)
{
    if (odleglosc > 0) {
        przebieg += odleglosc;
        std::cout << "Samochod przejechal " << odleglosc << " km. Caly przebieg to teraz " << przebieg << " km.\n";
    }
}

void Samochod::informacje()
{
    std::cout << "Marka: " << marka << "\n"
        << "Model: " << model << "\n"
        << "Rok produkcji: " << rokProdukcji << "\n"
        << "Przebieg: " << przebieg << " km.\n";
}