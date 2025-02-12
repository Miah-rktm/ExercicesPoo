#include "Personne.hpp"
#include "Infrastructure.hpp"

using namespace Bibliotheque;

// Implémentation des méthodes

// Personne
Personne::Personne(std::string n, int a) : nom(n), age(a) {}

void Personne::afficher() const
{
    std::cout << "Nom: " << nom << ", Âge: " << age << std::endl;
}

// Étudiant
Etudiant::Etudiant(std::string n, int a, std::string f) : Personne(n, a), filiere(f) {}

void Etudiant::afficher() const
{
    std::cout << "Étudiant - Nom: " << nom << ", Âge: " << age << ", Filière: " << filiere << std::endl;
}

// Enseignant
Enseignant::Enseignant(std::string n, int a, std::string m) : Personne(n, a), matiere(m) {}

void Enseignant::afficher() const
{
    std::cout << "Enseignant - Nom: " << nom << ", Âge: " << age << ", Matière: " << matiere << std::endl;
}

// Médecin
Medecin::Medecin(std::string n, int a, std::string s) : Personne(n, a), specialite(s) {}

void Medecin::afficher() const
{
    std::cout << "Médecin - Nom: " << nom << ", Âge: " << age << ", Spécialité: " << specialite << std::endl;
}

// Infrastructure
Infrastructure::Infrastructure(std::string n) : nom(n) {}

void Infrastructure::afficher() const
{
    std::cout << "Infrastructure: " << nom << std::endl;
}

// Etablissement
Etablissement::Etablissement(std::string n) : Infrastructure(n) {}

void Etablissement::ajouterEtudiant(const Etudiant &e)
{
    etudiants.push_back(e);
}

void Etablissement::ajouterEnseignant(const Enseignant &e)
{
    enseignants.push_back(e);
}

void Etablissement::afficher() const
{
    std::cout << "Établissement: " << nom << std::endl;
    for (const auto &e : etudiants)
        e.afficher();
    for (const auto &e : enseignants)
        e.afficher();
}

// Hopital
Hopital::Hopital(std::string n) : Infrastructure(n) {}

void Hopital::ajouterMedecin(const Medecin &m)
{
    medecins.push_back(m);
}

void Hopital::afficher() const
{
    std::cout << "Hôpital: " << nom << std::endl;
    for (const auto &m : medecins)
        m.afficher();
}
