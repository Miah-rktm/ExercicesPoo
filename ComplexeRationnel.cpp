#include <iostream>
#include <numeric>
#include "ComplexeRationnel.hpp"

using namespace std;

// Constructeur avec simplification
ComplexeRationnel::ComplexeRationnel(int numRe, int denRe, int numIm, int denIm)
    : numRe(numRe), denRe(denRe), numIm(numIm), denIm(denIm)
{
    if (denRe == 0 || denIm == 0)
    {
        throw invalid_argument("Le dénominateur ne peut pas être zéro.");
    }
    simplifier(this->numRe, this->denRe);
    simplifier(this->numIm, this->denIm);
}

// Fonction pour simplifier une fraction
void ComplexeRationnel::simplifier(int &num, int &den) const
{
    int pgcd = gcd(num, den);
    num /= pgcd;
    den /= pgcd;
}

// Addition : (a/b + c/d) = (ad + bc) / bd
ComplexeRationnel ComplexeRationnel::somme(const ComplexeRationnel &n) const
{
    int newNumRe = numRe * n.denRe + n.numRe * denRe;
    int newDenRe = denRe * n.denRe;

    int newNumIm = numIm * n.denIm + n.numIm * denIm;
    int newDenIm = denIm * n.denIm;

    return ComplexeRationnel(newNumRe, newDenRe, newNumIm, newDenIm);
}

// Soustraction : (a/b - c/d) = (ad - bc) / bd
ComplexeRationnel ComplexeRationnel::soustraction(const ComplexeRationnel &n) const
{
    int newNumRe = numRe * n.denRe - n.numRe * denRe;
    int newDenRe = denRe * n.denRe;

    int newNumIm = numIm * n.denIm - n.numIm * denIm;
    int newDenIm = denIm * n.denIm;

    return ComplexeRationnel(newNumRe, newDenRe, newNumIm, newDenIm);
}

// Multiplication : (a/b * c/d) = (ac) / (bd)
ComplexeRationnel ComplexeRationnel::multiplication(const ComplexeRationnel &n) const
{
    int newNumRe = numRe * n.numRe - numIm * n.numIm;
    int newDenRe = denRe * n.denRe;

    int newNumIm = numRe * n.numIm + numIm * n.numRe;
    int newDenIm = denRe * n.denIm;

    return ComplexeRationnel(newNumRe, newDenRe, newNumIm, newDenIm);
}

// Division : (a + bi) / (c + di) = [(ac + bd) + (bc - ad)i] / (c² + d²)
ComplexeRationnel ComplexeRationnel::division(const ComplexeRationnel &n) const
{
    int denom = (n.numRe * n.numRe + n.numIm * n.numIm);

    int newNumRe = (numRe * n.numRe + numIm * n.numIm);
    int newDenRe = denRe * denom;

    int newNumIm = (numIm * n.numRe - numRe * n.numIm);
    int newDenIm = denIm * denom;

    return ComplexeRationnel(newNumRe, newDenRe, newNumIm, newDenIm);
}

// Affichage du nombre complexe rationnel
void ComplexeRationnel::afficher() const
{
    cout << "(" << numRe << "/" << denRe << ") + (" << numIm << "/" << denIm << ")i" << endl;
}
