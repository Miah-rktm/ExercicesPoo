#include "Personne.hpp"
#include "Infrastructure.hpp"

using namespace Bibliotheque;

int main()
{
    // Création des personnes
    Etudiant e1("Alice", 20, "Informatique");
    Enseignant ens1("Prof. Dupont", 45, "Mathématiques");
    Medecin m1("Dr. Martin", 50, "Chirurgie");

    // Création d'un établissement
    Etablissement etab("Université XYZ");
    etab.ajouterEtudiant(e1);
    etab.ajouterEnseignant(ens1);

    // Création d'un hôpital
    Hopital hop("Hôpital Central");
    hop.ajouterMedecin(m1);

    // Affichage
    std::cout << "\n--- Affichage des données ---\n";
    etab.afficher();
    hop.afficher();

    return 0;
}
