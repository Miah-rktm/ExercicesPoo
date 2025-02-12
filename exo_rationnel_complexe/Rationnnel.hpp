#ifndef rationnnel_hpp
#define rationnel_hpp
class Rationnel
{
public:
    Rationnel(int num, int deno);
    Rationnel somme(const Rationnel &rationnel2);
    Rationnel multiplication(const Rationnel &rationnel2);
    Rationnel soustraction(const Rationnel &rationnel2);
    Rationnel division(const Rationnel &rationnel2);
    void afficher();

private:
    int numerateur, denominateur;
    int pgcd(int nb1, int nb2);
};
#endif