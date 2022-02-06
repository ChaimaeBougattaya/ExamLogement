#pragma once
#include"Logement.h"
#include<iostream>
#include<map>
using namespace std;
namespace Immob {
	class Quartier
	{
		map<string, Logement*> logements;
	public:
		Quartier() {
			logements = map<string, Logement*>();
		}
		void addLogement(Logement * l)
		{
			this->logements.insert(make_pair(l->adresseLogement(), l));
		}
		void Info()
		{
			double taxe = 0;
			for (auto it : logements)
			{
				cout << "\n\n*********************\n";
				cout << it.first;
				it.second->afficher();
				taxe += it.second->taxe();
			}
			cout << "\n\n==>le cumul des taxes des logements est  : " << taxe;
		}
		~Quartier()
		{
			for (auto it : logements)
				delete it.second;
		}
	};
}
