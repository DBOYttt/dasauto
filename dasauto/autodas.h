#ifndef AUTODAS_H
#define AUTODAS_H
#include <iostream>
#include <string>

/*class Samochod {
private:
    std::string marka;
    std::string model;
    int rokProdukcji;
    int przebieg;

public:
    Samochod(std::string marka, std::string model, int rokProdukcji);

    // getter i setter dla marki
    std::string getMarka();

    void setMarka(std::string marka);

    // getter i setter dla modelu
    std::string getModel();

    void setModel(std::string model);

    // getter i setter dla roku produkcji
    int getRokProdukcji();

    void setRokProdukcji(int rokProdukcji);

    // getter i setter dla przebiegu
    int getPrzebieg();

    void setPrzebieg(int przebieg);

    // metoda jedz
    void jedz(int odleglosc);

    // metoda informacje
    void informacje();
};
*/
class Samochod {
private:
    std::string marka;
    std::string model;
    int rokProdukcji;
    int przebieg;

public:
    Samochod(std::string marka, std::string model, int rokProdukcji)
        : marka(marka), model(model), rokProdukcji(rokProdukcji), przebieg(0) {}

    // Gettery
    std::string getMarka() { return marka; }
    std::string getModel() { return model; }
    int getRokProdukcji() { return rokProdukcji; }
    int getPrzebieg() { return przebieg; }

    // Settery
    void setMarka(std::string m) { marka = m; }
    void setModel(std::string m) { model = m; }
    void setRokProdukcji(int r) { if (r >= 0) rokProdukcji = r; }
    void setPrzebieg(int p) { if (p >= 0) przebieg = p; }

    void jedz(int odleglosc);
    void informacje();
};

#endif // AUTODAS_H