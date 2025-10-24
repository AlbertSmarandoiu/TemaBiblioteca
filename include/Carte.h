
#pragma once
#include <iostream>
#include <cstring>

class Carte {
private:
    char* titlu;
    int pagini;

public:
    // Constructor
    Carte(const char* t, int p);

    // Copy constructor
    Carte(const Carte& other);

    // Move constructor
    Carte(Carte&& other) noexcept;

    // Destructor
    ~Carte();

    // Getters
    const char* getTitlu() const;
    int getPagini() const;

    // Setter
    void setTitlu(const char* nouTitlu);

    // Metodă de afișare
    void afiseaza() const;
};
