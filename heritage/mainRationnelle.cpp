#include "Rationnnel.hpp"
#include <iostream>

using namespace std;
int main()
{
    Rationnel r1(1, 2);
    Rationnel r2(2, 3);
    Rationnel sum = r1.somme(r2);
    cout << "La somme est: ";
    sum.afficher();
    Rationnel produit = r1.multiplication(r2);
    cout << "Leur produit: ";
    produit.afficher();
    Rationnel soustraire = r1.soustraction(r2);
    cout << "Leur soustraction : ";
    soustraire.afficher();
    Rationnel divi = r1.division(r2);
    cout << "Leur division : ";
    divi.afficher();
    return 0;
}