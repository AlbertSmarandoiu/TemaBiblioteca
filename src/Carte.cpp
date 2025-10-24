#include "Carte.h"
using namespace std;

// Constructor normal + lista de inițializare
Carte::Carte(const char* t, int p) : pagini(p) {
    cout << "[Constructor normal] Se creează cartea: " << t << endl;
    titlu = new char[strlen(t) + 1];
    strcpy(titlu, t);
}

// Copy constructor
Carte::Carte(const Carte& other) : pagini(other.pagini) {
    cout << "[Copy constructor] Se copiază cartea: " << other.titlu << endl;
    titlu = new char[strlen(other.titlu) + 1];
    strcpy(titlu, other.titlu);
}

// Move constructor
Carte::Carte(Carte&& other) noexcept : titlu(other.titlu), pagini(other.pagini) {
    cout << "[Move constructor] Se mută cartea: " << titlu << endl;
    other.titlu = nullptr; // nu mai deține memoria
}

// Destructor
Carte::~Carte() {
    cout << "[Destructor] Se șterge cartea: " << (titlu ? titlu : "null") << endl;
    delete[] titlu;
}

// Getters
const char* Carte::getTitlu() const { return titlu; }
int Carte::getPagini() const { return pagini; }

// Setter
void Carte::setTitlu(const char* nouTitlu) {
    delete[] titlu;
    titlu = new char[strlen(nouTitlu) + 1];
    strcpy(titlu, nouTitlu);
}

// Metodă de afișare
void Carte::afiseaza() const {
    cout << "Carte: " << titlu << " (" << pagini << " pagini)" << endl;
}
