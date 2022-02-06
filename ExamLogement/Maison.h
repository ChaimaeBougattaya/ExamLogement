#pragma once
#include "Logement.h"
namespace Immob {
	class Maison :public Logement
	{
	private:
		bool piscine;
		int surfaceTerrain;
	public:
		Maison(string a, int s, int n, double t, bool p, int st) :Logement(a,s,t,t)
		{
			this->piscine = p; this->surfaceTerrain = st;
		}
		void afficher()override 
		{
			cout << "\n\nDetail Maison " << endl;
			this->Logement::detailLogement();
			cout << "piscine "; if (this->piscine == true)cout << " existe "; else cout << "n'existe pas";
			cout <<endl<< "surface terrain :" << this->surfaceTerrain<<endl;
		}
		double taxe()override
		{
			double res;
			piscine == true ? res= (Logement::calculTaxe() * 0.1) + Logement::multipTaux(0.4 * surfaceTerrain) :
				res=(Logement::calculTaxe() * 0.1) + Logement::multipTaux(0.3 * surfaceTerrain);
			return res;
		}
		~Maison(){}
	};

}
