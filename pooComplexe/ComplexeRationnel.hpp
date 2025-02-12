#ifndef COMPLEXE_RATIONNEL_HPP
#define COMPLEXE_RATIONNEL_HPP

class ComplexeRationnel
{
public:
    // Constructeur
    ComplexeRationnel(int numRe, int denRe, int numIm, int denIm);

    // Opérations
    ComplexeRationnel somme(const ComplexeRationnel &n) const;
    ComplexeRationnel soustraction(const ComplexeRationnel &n) const;
    ComplexeRationnel multiplication(const ComplexeRationnel &n) const;
    ComplexeRationnel division(const ComplexeRationnel &n) const;

    // Affichage
    void afficher() const;

private:
    int numRe, denRe; // Partie réelle sous forme de fraction (numérateur, dénominateur)
    int numIm, denIm; // Partie imaginaire sous forme de fraction (numérateur, dénominateur)

    // Fonction pour simplifier une fraction
    void simplifier(int &num, int &den) const;
};

#endif
