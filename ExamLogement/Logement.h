#pragma once
#include<iostream>
using namespace std;
namespace Immob {
	class Logement
	{
	private:
		string adresse;
		int surfaceH, nbrpiece;
		double tauxIm;
	public:
		Logement(string a, int s, int n, double t)
		{
			this->adresse = a; this->nbrpiece = n; this->surfaceH = s; this->tauxIm = t;
		}
		string adresseLogement() { return this->adresse; }
		void detailLogement()
		{
			cout << "adresse : " << this->adresse << endl;
			cout << "surface Habitable : " << this->surfaceH << endl;
			cout << "nbr piece : " << this->nbrpiece << endl;
			cout << "taux imposition : " << this->tauxIm << endl;
		}
		virtual void afficher() = 0;
		virtual double taxe() = 0;
		double calculTaxe() { return tauxIm * surfaceH; }
		double multipTaux(int val) { return tauxIm * val; }

		virtual ~Logement(){}
	};
}


