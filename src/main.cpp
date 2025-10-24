#include "Carte.h"
#include "Biblioteca.h"

int main() {
    Carte c1("Ion", 300);
    Carte c2 = c1;               // Copy constructor
    Carte c3("Morometii", 500);
    Carte c4 = std::move(c3);    // Move constructor

    Biblioteca b(2);
    b.adaugaCarte(0, c1);
    b.adaugaCarte(1, c2);
    b.afiseazaCarti();

    return 0;
}
