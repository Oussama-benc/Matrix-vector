#pragma once
#include<iostream>
#include"vecteur.h"

using namespace std;
class matrice;
class vecteur;
class matrice {

	int m[3][3];
public:
	matrice(int tab[][3]);
	matrice();
	void affiche();

};


