#include "Complexe.hpp"
#include <iostream>
#include <cmath>
using namespace std;

Complexe::Complexe(double a, double b)
{
    re = a;
    im = b;
}
Complexe Complexe::somme(const Complexe &n)
{
    double newRe = re + n.re;
    double newIm = im + n.im;
    return Complexe(newRe, newIm);
}
Complexe Complexe::soustraction(const Complexe &n)
{
    double newRe = re - n.re;
    double newIm = im - n.im;
    return Complexe(newRe, newIm);
}
Complexe Complexe::multiplication(const Complexe &n)
{
    double newRe = (re * n.re) - (im * n.im);
    double newIm = (re * n.im) + (im * n.re);
    return Complexe(newRe, newIm);
}
Complexe Complexe::division(const Complexe &n)
{
    double denominateur = pow(n.re, 2) + pow(n.im, 2);
    double newRe = ((re * n.re) + (im * n.im)) / denominateur;
    double newIm = ((im * n.re) - (re * n.im)) / denominateur;
    return Complexe(newRe, newIm);
}
void Complexe::afficher()
{
    cout << re << "+" << im << "i" << endl;
}