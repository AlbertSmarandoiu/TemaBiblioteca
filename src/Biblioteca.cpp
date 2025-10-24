#include "Biblioteca.h"
#include <iostream>
using namespace std;

Biblioteca::Biblioteca(int n) : nrCarti(n) {
    cout << "[Constructor Biblioteca]" << endl;
    colectie = new Carte[n]; // va apela constructorul implicit
}

Biblioteca::~Biblioteca() {
    cout << "[Destructor Biblioteca]" << endl;
    delete[] colectie;
}

void Biblioteca::adaugaCarte(int index, const Carte& c) {
    if (index >= 0 && index < nrCarti)
        colectie[index] = c; // va apela operatorul de copiere
}

void Biblioteca::afiseazaCarti() const {
    cout << "Biblioteca conține:" << endl;
    for (int i = 0; i < nrCarti; i++)
        colectie[i].afiseaza();
}
