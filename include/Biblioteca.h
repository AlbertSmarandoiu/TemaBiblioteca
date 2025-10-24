#pragma once
#include "Carte.h"

class Biblioteca {
private:
    Carte* colectie;
    int nrCarti;

public:
    Biblioteca(int n);
    ~Biblioteca();

    void adaugaCarte(int index, const Carte& c);
    void afiseazaCarti() const;
};
