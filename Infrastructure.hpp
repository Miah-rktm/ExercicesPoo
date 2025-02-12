#ifndef INFRASTRUCTURE_HPP
#define INFRASTRUCTURE_HPP

#include "Personne.hpp"

namespace Bibliotheque
{
    // Infrastructure est la classe mère de Etablissement,et Hopital
    class Infrastructure
    {
    protected:
        std::string nom;

    public:
        Infrastructure(std::string n);
        virtual void afficher() const;
        virtual ~Infrastructure() {}
    };

    // Établissement
    class Etablissement : public Infrastructure
    {
    private:
        std::vector<Etudiant> etudiants;
        std::vector<Enseignant> enseignants;

    public:
        Etablissement(std::string n);
        void ajouterEtudiant(const Etudiant &e);
        void ajouterEnseignant(const Enseignant &e);
        void afficher() const override;
    };

    // Hôpital
    class Hopital : public Infrastructure
    {
    private:
        std::vector<Medecin> medecins;

    public:
        Hopital(std::string n);
        void ajouterMedecin(const Medecin &m);
        void afficher() const override;
    };

}

#endif
