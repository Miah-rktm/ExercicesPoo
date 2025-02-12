#ifndef complexe_hpp
#define complexe_hpp
class Complexe
{
public:
    Complexe(double a, double b);
    Complexe somme(const Complexe &n);
    Complexe soustraction(const Complexe &n);
    Complexe multiplication(const Complexe &n);
    Complexe division(const Complexe &n);
    void afficher();

private:
    double re, im;
};
#endif