#include "Rationnnel.hpp"
#include <iostream>

using namespace std;
int Rationnel::pgcd(int nb1, int nb2)
{
    while (nb2 != 0)
    {
        int temp = nb2;
        nb2 = nb1 % nb2;
        nb1 = temp;
    }
    return nb1;
}
Rationnel::Rationnel(int num, int deno)
{
    if (deno == 0)
    {
        cout << "Erreur car la dénominateur doit etre différent de 0" << endl;
    }
    int div = pgcd(num, deno);
    this->numerateur = num / div;
    this->denominateur = deno / div;
}
Rationnel Rationnel::somme(const Rationnel &rationnel2)
{
    int newnum = numerateur * rationnel2.denominateur + rationnel2.numerateur * denominateur;
    int newdeno = denominateur * rationnel2.denominateur;
    return Rationnel(newnum, newdeno);
    int newnum = numerateur * rationnel2.numerateur;
    int newdeno = denominateur * rationnel2.denominateur;
    return Rationnel(newnum, newdeno);
}
Rationnel Rationnel::soustraction(const Rationnel &rationnel2)
{
    int newnum = numerateur * rationnel2.denominateur - rationnel2.numerateur * denominateur;
    int newdeno = denominateur * rationnel2.denominateur;
    return Rationnel(newnum, newdeno);
}
Rationnel Rationnel::division(const Rationnel &rationnel2)
{
    int newnum = numerateur * rationnel2.denominateur;
    int newdeno = denominateur * rationnel2.numerateur;
    return Rationnel(newnum, newdeno);
}
void Rationnel::afficher()
{
    cout << numerateur << "/" << denominateur << endl;
}