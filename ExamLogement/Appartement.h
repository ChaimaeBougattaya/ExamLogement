#pragma once
#include "Logement.h"
namespace Immob {
	class Appartement : public Logement
	{
	private:
		int numetage;
	public:
		Appartement(string a, int s, int n, double t, int ne) :Logement(a, s,n,t)
		{
			this->numetage = ne;
		}
		void afficher()override
		{
			cout << "\n\nDetail Appartement " << endl;
			cout << "num etage  :" << this->numetage << endl;
			this->Logement::detailLogement();
		}
		double taxe()override{return Logement::calculTaxe();}
		~Appartement(){}
	};

}

