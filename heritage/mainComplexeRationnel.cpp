#include <iostream>
#include "ComplexeRationnel.hpp"

using namespace std;

int main()
{
    ComplexeRationnel c1(3, 4, 2, 5); // 3/4 + 2/5i
    ComplexeRationnel c2(1, 2, 7, 3); // 1/2 + 7/3i

    cout << "Premier nombre complexe rationnel : ";
    c1.afficher();

    cout << "Deuxième nombre complexe rationnel : ";
    c2.afficher();

    cout << "Somme : ";
    ComplexeRationnel resultat = c1.somme(c2);
    resultat.afficher();

    cout << "Soustraction : ";
    resultat = c1.soustraction(c2);
    resultat.afficher();

    cout << "Multiplication : ";
    resultat = c1.multiplication(c2);
    resultat.afficher();

    cout << "Division : ";
    resultat = c1.division(c2);
    resultat.afficher();

    return 0;
}
