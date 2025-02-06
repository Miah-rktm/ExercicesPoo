#include "Complexe.hpp"
#include <iostream>

using namespace std;
int main()
{
    Complexe c1(1, 2);
    Complexe c2(2, 3);
    Complexe sum = c1.somme(c2);
    cout << "La somme est: ";
    sum.afficher();
    Complexe soustraire = c1.soustraction(c2);
    cout << "Leur soustraction est: ";
    soustraire.afficher();
    Complexe produit = c1.multiplication(c2);
    cout << "Leur produit est: ";
    produit.afficher();
    Complexe div = c1.division(c2);
    cout << "Leur division est: ";
    div.afficher();

    return 0;
}
