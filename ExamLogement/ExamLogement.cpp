// ExamLogement.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Logement.h"
#include"Maison.h"
#include"Appartement.h"
#include"Quartier.h"
using namespace std;
using namespace Immob;
int main()
{
    Logement* l1 = new Appartement("hay salam", 80, 5, 100, 3);
    Logement* l2 = new Appartement("el badr", 70, 3, 60, 3);
    Logement* l3 = new Maison("al alia", 85, 5, 110, true,90);
    Logement* l4 = new Maison("fedala", 90, 6, 40,false, 103);

    Quartier* Q = new Quartier();
    Q->addLogement(l1);
    Q->addLogement(l2);
    Q->addLogement(l3);
    Q->addLogement(l4);

    Q->Info();

    delete Q;
    

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
