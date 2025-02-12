#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <iostream>
#include <vector>

namespace Bibliotheque
{
    // Personne est la classe mère de la class Etudiant,Enseignant et Médecin

    class Personne
    {
    protected:
        std::string nom;
        int age;

    public:
        Personne(std::string n, int a);
        virtual void afficher() const;
        virtual ~Personne() {}
    };

    // Étudiant
    class Etudiant : public Personne
    {
    private:
        std::string filiere;

    public:
        Etudiant(std::string n, int a, std::string f);
        void afficher() const override;
    };

    // Enseignant
    class Enseignant : public Personne
    {
    private:
        std::string matiere;

    public:
        Enseignant(std::string n, int a, std::string m);
        void afficher() const override;
    };

    // Médecin
    class Medecin : public Personne
    {
    private:
        std::string specialite;

    public:
        Medecin(std::string n, int a, std::string s);
        void afficher() const override;
    };

}
#endif
