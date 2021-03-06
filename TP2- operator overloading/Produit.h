/********************************************
* Titre: Travail pratique #2 - Produit.h
* Date: 25 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA & Timoth�e CHAUVIN
*******************************************/

#pragma once

#include <string>
#include <iostream>

using namespace std;

class Produit
{

public:
	// Constructeurs et destructeurs
	Produit(const string& nom="outil", int reference=0, double prix=0.0);
	~Produit();

	//méthodes d'accès
	string obtenirNom() const;
	int obtenirReference() const;
	double obtenirPrix() const;
	//méthodes de modification
	void modifierNom(const string& nom);
	void modifierReference(int reference);
	void modifierPrix(double prix);
	//surcharge opérateurs	
	bool operator>(const Produit& produit) const;
	bool operator<(const Produit& produit) const;
	bool operator==(const Produit& produit) const;
	
	friend istream& operator>>(istream& is, Produit& produit);

	friend ostream& operator<<(ostream& os, const Produit& produit);

   
private:
	string nom_;
	int reference_;
    double prix_;

};
